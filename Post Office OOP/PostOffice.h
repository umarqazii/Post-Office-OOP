/*
Umar Qazi
20i-0968
section:B
Semester Project
*/
#ifndef POSTOFFICE_H
#define POSTOFFICE_H
#include<iostream>
using namespace std;


class PostOffice {
	int code;
	string address;
	string city;
public:
	PostOffice();
	PostOffice(int cd, string ad, string ct);
	void setCode(int c);
	int getCode();
	void setAddress(string a);
	string getAddress();
	void setCity(string cty);
	string getCity();
	void Display();
};
#endif // !POSTOFFICE_H
