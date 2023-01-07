/*
Umar Qazi
20i-0968
section:B
Semester Project
*/
#ifndef POSTALWORKER_H
#define POSTALWORKER_H
#include "Customer.h"
#include "PostOffice.h"
#include<iostream>
using namespace std;
class PostalWorker {
protected:
	string name;
	string ID;
	string city;
public:
	PostalWorker();
	PostalWorker(string, string, string);
	void setName(string);
	void setID(string);
	void setCity(PostOffice& PO);
	string getName();
	string getID();
	string getCity();
	void Display(PostOffice& PO);
};
#endif // !POSTALWORKER_H
