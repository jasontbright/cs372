/*
namehandlerbase.h
Jason Bright
20160502
For CS372 Homework 4
contains the base class for my name handler.
*/
/*
Using research from 
https://sourcemaking.com/design_patterns/chain_of_responsibility/cpp/1
http://www.dofactory.com/net/chain-of-responsibility-design-pattern
http://www.codeproject.com/Articles/41786/Chain-of-Responsibility-Design-Pattern


*/
#ifndef NAMEHANDLERBASE_INCLUDE
#define NAMEHANDLERBASE_INCLUDE

#include <iostream>
#include <vector>
#include <string>


// NameHandler, a Chain of responsibility base class 
// Given a name, it should pass the name to handlers
// Until one is found that will handle that name.

class NameHandler {
private:
	NameHandler *nextHandler; //pointer to the next handler.
	std::string name;  //The name it's been given.
public:
//Constructor
	NameHandler() {
		nextHandler = 0;
	}
	NameHandler(const std::string & input) {
		nextHandler = 0;
		name = input;
	}
	NameHandler(const char * input) {
		nextHandler = 0;
		name = input;
	}
//Setters	
	void setName(const std::string & input) {
		name = input;
	}
	void setName(const char * input) {
	name = input;
	}
//Accessor
	std::string & Name() {
		return name;
	}
//addHandler is the function called to give the class it's next handler
	void addHandler(NameHandler *n) {
		if (nextHandler)
			nextHandler->addHandler(n);
		else
			nextHandler = n;
	}
//handle is the function to actually do things.
	virtual void handle(const std::string & name) {
		nextHandler->handle(name);
	}
//Wrapper function.
	virtual void handle() {
		nextHandler->handle(name);
	}
};


#endif //NAMEHANDLERBASE_INCLUDE