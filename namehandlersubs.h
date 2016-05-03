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

// Hey, a name is capitalized, right?
class NameCheckCap: public NameHandler {
public:
	void handle(const std::string & name);
};

class NameCheckSize: public NameHandler {
	public:
	void handle(const std::string & name) {
		if (name.size() == 0) {
			cout << "Please enter your name next time!" << endl;
		} else {
			NameHandler::handle(name);
		}
	}
};

class NameCheckTeacher: public NameHandler {
	public:
	void handle(const std::string & name) {
		if (isNameMatch(name, "Glenn", "Chappell")) {
			cout << "Hello Teacher!" << endl;
		} else {
			NameHandler::handle(name);
		}
	}
};

#endif //NAMEHANDLERSUBS_INCLUDE