/*
Umar Qazi
20i-0968
section:B
Semester Project
*/
#ifndef ADDRESS_H
#define ADDRESS_H
#include<string>
#include<iostream>
using namespace std;

class Address {
	int s_houseno;
	int s_streetno;
	string s_sector;
	string s_city;
	string s_country;
	int r_houseno;
	int r_streetno;
	string r_sector;
	string r_city;
	string r_country;
public:
	Address();
	Address(int s_h, int s_st, string s_s, string s_c,int r_h, int r_st, string r_s, string r_c);
	void s_setHouse(int s_hn);
	void s_setStreet(int s_st);
	void s_setSector(string s_sec);
	void s_setCity(string s_c);
	void s_setCountry();
	int s_getHouse();
	int s_getStreet();
	string s_getSector();
	string s_getCity();
	string s_getCountry();
	void s_Display();
	void r_setHouse(int s_hn);
	void r_setStreet(int s_st);
	void r_setSector(string s_sec);
	void r_setCity(string s_c);
	void r_setCountry(string cnt);
	int r_getHouse();
	int r_getStreet();
	string r_getSector();
	string r_getCity();
	string r_getCountry();
	void r_Display();
	void Display();
};
 
#endif // !ADDRESS_H

