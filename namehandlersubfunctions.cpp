/*
namehandlersubfunctions.cpp
Jason Bright
20160502
For CS372 Homework 4
contains the sub function codes.
*/

#include "namehandlersubs.h"
using std::cout;
using std::endl;

//Sees if the name provided matches the first/last name checked for.
bool isNameMatch(const std::string & name, const std::string & firstName, const std::string & lastName) {
		std::size_t first = name.find(firstName);
		std::size_t last = name.find(lastName);
		if ((first != std::string::npos) && (last != std::string::npos)) {
			return true; //Ignoring middle initial, "first last" or "last, first", etc...
		} else if ((name==firstName) || (name==lastName)){
			return true; //first or last name only
		} else {
			return false;
		}
}

//Last resort, handles everything.
void NameLastResort::handle(const std::string & name) {
		cout << "I don't know what to do!" << endl;
}

//CheckSize makes sure that something is entered.
void NameCheckSize::handle(const std::string & name) {
	if (name.size() == 0) {
		cout << "Please enter your name next time!" << endl;
	} else {
		NameHandler::handle(name);
	}
}

//looks for my CS372 teacher's name.  ;)  Says "Hello" if found.
void NameCheckTeacher::handle(const std::string & name) {
	if (isNameMatch(name, "Glenn", "Chappell")) {
		cout << "Hello Teacher!" << endl;
	} else {
		NameHandler::handle(name);
	}
}

//checks to see if the first letter is capitalized.
void NameCheckCap::handle(const std::string & name) {
	if ((name[0] >= 'A') && (name[0] <= 'Z')) {
		NameHandler::handle(name); //It's a capital letter, pass on.
	} else {
		cout << "Don't names start with a capital letter?" << endl;
	}
}