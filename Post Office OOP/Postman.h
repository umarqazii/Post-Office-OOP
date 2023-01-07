/*
Umar Qazi
20i-0968
section:B
Semester Project
*/
#ifndef POSTMAN_H
#define POSTMAN_H
#include "PostalWorker.h"
class Postman: public PostalWorker{
public:
	Postman();
	void Display(PostOffice& PO);
};
#endif // !POSTMAN_H
