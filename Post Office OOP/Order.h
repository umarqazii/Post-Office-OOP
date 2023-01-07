/*
Umar Qazi
20i-0968
section:B
Semester Project
*/
#ifndef ORDER_H
#define ORDER_H
#include "Address.h"
#include "Customer.h"
#include "Invoice.h"
class Order {
	Customer* customer;
	Invoice* invoice;
public:
	Order();
	void setOrder();
	void Display(Address& A);
	~Order();
};
#endif // !ORDER_H
