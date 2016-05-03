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

//Sees if my teacher's name is in the string
//something of a hack, but it
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

void NameLastResort::handle(const std::string & name) {
		cout << "I don't know what to do!" << endl;
}

void NameCheckCap::handle(const std::string & name) {
	if ((name[0] >= 'A') && (name[0] <= 'Z')) {
		NameHandler::handle(name); //It's a capital letter, pass on.
	} else {
		cout << "Don't names start with a capital letter?" << endl;
	}
}