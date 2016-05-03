/*
namehandlersubs.h
Jason Bright
20160502
For CS372 Homework 4
contains the sub
*/

#ifndef NAMEHANDLERSUBS_INCLUDE
#define NAMEHANDLERSUBS_INCLUDE

#include <iostream>
#include <vector>
#include <string>
#include "namehandlerbase.h"

using std::cout;
using std::endl;

bool isNameMatch(const std::string & name, const std::string & firstName, const std::string & lastName);

// NameLastResort, can handle anything!  (badly)
class NameLastResort: public NameHandler {
public:
	void handle(const std::string & name);
};

// Hey, a name is capitalized, right?  Makes sure the first letter is a capital
class NameCheckCap: public NameHandler {
public:
	void handle(const std::string & name);
};

// Checks to see that something was actually entered.
class NameCheckSize: public NameHandler {
	public:
	void handle(const std::string & name);
};

// Sees if my CS372 teacher put his name in...
// I promise, no threatening letters to the president.
class NameCheckTeacher: public NameHandler {
	public:
	void handle(const std::string & name);
};

#endif //NAMEHANDLERSUBS_INCLUDE