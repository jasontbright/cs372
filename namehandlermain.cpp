/*
namehandlermain.cpp
Jason Bright
20160502
For CS372 Homework 4
*/

#include "namehandlerbase.h"
#include "namehandlersubs.h"

using std::cout;
using std::cin;
using std::endl;
using std::getline;

//Main's function is to set up the chain of responsibility and do a basic task with it.
//It asks your name and does something in return.
int main()
{
	std::string inputstr; //used to get input
	NameHandler NameHandle; //name handler base.
	NameLastResort NameLResort; //last resort
	NameCheckSize Handler1; //check to see if something is actually entered
	NameCheckCap Handler2; //check for a first capital letter
	NameCheckTeacher Handler3; //check for teacher's name.
//Add the handlers to the class.
	NameHandle.addHandler(&Handler1);
	NameHandle.addHandler(&Handler2); 
	NameHandle.addHandler(&Handler3);
	NameHandle.addHandler(&NameLResort); //Adding the last resort.
	
	cout << "Please enter your name: ";
	getline (std::cin, inputstr);
//	cout << "Hello " << inputstr << endl;
	NameHandle.setName(inputstr);
	NameHandle.handle();  //Actually process the name
	
	return 0;
}