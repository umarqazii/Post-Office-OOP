/*
Umar Qazi
20i-0968
section:B
Semester Project
*/
#ifndef CLERK_H
#define CLERK_H
#include "PostalWorker.h"
class Clerk:public PostalWorker {
	public:
	Clerk();
	void Display(PostOffice& PO);
};
#endif // !CLERK_H
