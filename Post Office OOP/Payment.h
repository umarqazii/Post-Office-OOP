/*
Umar Qazi
20i-0968
section:B
Semester Project
*/
#ifndef PAYMENT_H
#define PAYMENT_H
#include "Invoice.h"
#include "MailServices.h"
class Payment {
public:
	Payment();
	float calculatePayment(Invoice& in, MailServices& MS);
	
};
#endif // !PAYMENT_H
