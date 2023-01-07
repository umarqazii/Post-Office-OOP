/*
Umar Qazi
20i-0968
section:B
Semester Project
*/
#ifndef ACCOUNTOFFICER_H
#define ACCOUNTOFFICER_H
#include "PostalWorker.h"
class AccountOfficer: public PostalWorker{
	public:
		AccountOfficer();
		void Display(PostOffice& PO);
};
#endif // !ACCOUNTOFFICER_H

