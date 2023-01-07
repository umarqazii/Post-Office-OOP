/*
Umar Qazi
20i-0968
section:B
Semester Project
*/
#ifndef INVOICE_H
#define INVOICE_H
#include<iostream>
using namespace std;
class Invoice {
	int orderID;
	int weight;
	string dimension;
	string shipmentTime;
public:
	Invoice();
	Invoice(int,int,string,string);
	void setorderID(int);
	void setweight(int);
	void setdimension(string);
	void setshipmentTime(string);
	int getorderID();
	int getweight();
	string getdimension();
	string getshipmentTime();
	void Display();
};
#endif // !INVOICE_H
