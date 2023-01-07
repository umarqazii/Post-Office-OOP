/*
Umar Qazi
20i-0968
section:B
Semester Project
*/
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "Address.h"
class Customer {
	string name;
	int ID;
	string ContactNumber;
	
	public:
		Customer();
		Customer(string n, int id, string num);
	void setName(string n);
	void setID(int id);
	void setNumber(string N);
	string getName();
	int getID();
	string getNumber();
	void Display(Address &A);
};

#endif // !CUSTOMER_H
