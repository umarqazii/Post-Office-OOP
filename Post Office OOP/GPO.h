/*
Umar Qazi
20i-0968
section:B
Semester Project
*/
#ifndef GPO_H
#define GPO_H
#include"PostOffice.h"
class GPO {
	PostOffice* postoffice;
	int t_code;
	string t_address;
	string city;
	int num;
	public:
		GPO();
		void SetPostOffices();
		void getPostOffices();
};

#endif // !GPO_H
