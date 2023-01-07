/*
Umar Qazi
20i-0968
section:B
Semester Project
*/
#include "AccountOfficer.h"
#include "Address.h"
#include "Clerk.h"
#include "Customer.h"
#include "GPO.h"
#include "Invoice.h"
#include "MailServices.h"
#include "Order.h"
#include "Payment.h"
#include "PostalWorker.h"
#include "Postman.h"
#include "PostOffice.h"
#include "SortingSection.h"
#include <iostream>
#include <string>
using namespace std;

////////////////////////Post Office class definition////////////////////////
PostOffice::PostOffice(){
	code = 0;
	address = '\0';
	city = '\0';
}
PostOffice::PostOffice(int cd, string ad, string ct) {
	code = cd;
	address = ad;
	city = ct;
}
void PostOffice::setCode(int c) {
	code = c;
}
int PostOffice::getCode() {
	return code;
}
void PostOffice::setAddress(string a) {
	address = a;
}
string PostOffice::getAddress() {
	return address;
}
void PostOffice::setCity(string cty) {
	city = cty;
}
string PostOffice::getCity() {
	return city;
}
void PostOffice::Display() {
	cout << "Post Office Code: " << getCode() << endl;
	cout << "Post Office Address: " << getAddress() << endl;
	cout << "Post Office City: " << getCity() << endl;
}


///////////////////Address class definition////////////////////
Address::Address() {
	s_houseno = 0;
	s_streetno = 0;
	s_sector = '\0';
	s_city = '\0';
	s_country="Pakistan";
	r_houseno = 0;
	r_streetno = 0;
	r_sector = '\0';
	r_city = '\0';
	r_country='\0';
}
Address::Address(int s_h, int s_st, string s_s, string s_c,int r_h, int r_st, string r_s, string r_c){
	s_houseno = s_h;
	s_streetno = s_st;
	s_sector = s_s;
	s_city = s_c;
	r_houseno = r_h;
	r_streetno = r_st;
	r_sector = r_s;
	r_city = r_c;
}
void Address::s_setHouse(int s_hn) {
	s_houseno = s_hn;
}
void Address::s_setStreet(int s_st) {
	s_streetno = s_st;
}
void Address::s_setSector(string s_sec) {
	s_sector = s_sec;
}
void Address::s_setCity(string s_c) {
	s_city = s_c;
}
void Address::s_setCountry() {
	s_country = "Pakistan";
}
int Address::s_getHouse() {
	return s_houseno;
}
int Address::s_getStreet() {
	return s_streetno;
}
string Address::s_getSector() {
	return s_sector;
}
string Address::s_getCity() {
	return s_city;
}
string Address::s_getCountry() {
	return s_country;
}
void Address::s_Display() {
	cout << "Sender Address: \n";
	cout << "House no: " << s_getHouse() <<  ", Street no: " << s_getStreet() <<  ", Sector: " << s_getSector() << endl;
	cout << "City: " << s_getCity()<<", "<<s_getCountry() << endl;
	
}


void Address::r_setHouse(int r_hn) {
	r_houseno = r_hn;
}
void Address::r_setStreet(int r_st) {
	r_streetno = r_st;
}
void Address::r_setSector(string r_sec) {
	r_sector = r_sec;
}
void Address::r_setCity(string r_c) {
	r_city = r_c;
}
void Address::r_setCountry(string cnt) {
	r_country = cnt;
}
int Address::r_getHouse() {
	return r_houseno;
}
int Address::r_getStreet() {
	return r_streetno;
}
string Address::r_getSector() {
	return r_sector;
}
string Address::r_getCity() {
	return r_city;
}
string Address::r_getCountry() {
	return r_country;
}
void Address::r_Display() {
	cout << "Receiver Address: \n";
	cout << "House no: " << r_getHouse() <<  ", Street no: " << r_getStreet() <<  ", Sector: " << r_getSector() << endl;
	cout << "City: " << r_getCity()<<", "<<r_getCountry() << endl;
}
void Address::Display(){
	s_Display();
	cout<<"\n";
	r_Display();
}



/////////////////////definition of class customer/////////////////////
	Customer::Customer(){
	}
	Customer::Customer(string nm, int iD, string num){
		name=nm;
		ID=iD;
		ContactNumber=num;
	}
	void Customer::setName(string n){
		name=n;
	}
	void Customer::setID(int id){
		ID=id;
	}
	void Customer::setNumber(string N){
		ContactNumber=N;
	}
	string Customer::getName(){
		return name;
	}
	int Customer::getID(){
		return ID;
	}
	string Customer::getNumber(){
		return ContactNumber;
	}
	void Customer::Display(Address &A){
		cout<<"Name: "<<getName()<<endl;
		cout<<"ID: "<<getID()<<endl;
		cout<<"Contact Number: "<<getNumber()<<endl;
		A.s_Display();
	}

	///////////////////////Definition of Class Invoice/////////////////////////////
	Invoice::Invoice() {}
	Invoice::Invoice(int id, int w, string d, string t) {
		orderID = id;
		weight = w;
		dimension = d;
		shipmentTime = t;
	}
	void Invoice::setorderID(int ID) {
		orderID = ID;
	}
	void Invoice::setweight(int wght) {
		weight = wght;
	}
	void Invoice::setdimension(string dim) {
		dimension = dim;
	}
	void Invoice::setshipmentTime(string time) {
		shipmentTime = time;
	}
	int Invoice::getorderID() {
		return orderID;
	}
	int Invoice::getweight() {
		return weight;
	}
	string Invoice::getdimension() {
		return dimension;
	}
	string Invoice::getshipmentTime() {
		return shipmentTime;
	}
	void Invoice::Display() {
		cout << "Order ID: " << getorderID() << endl;
		cout << "Weight: " << getweight()<<"kg"<<endl;
		cout << "Package Dimensions[LxWxH]: " << getdimension() << endl;
		cout << "Shipment Time: " << getshipmentTime() << endl;
	}

	////////////////////Definition of Class Order///////////////////////
	Order::Order() {
		this->customer = new Customer();
		this->invoice = new Invoice();
	}
	void Order::setOrder() {
		string name,contactno,dim,time;
		int customer_id, order_id, weight;
		cout<<"Customer Information:\n";
		cout<<"Name: ";
		cin>>name;
		cout<<"Customer ID: ";
		cin>>customer_id;
		cout<<"Contact Number: ";
		cin>>contactno;
		
		cout<<"Package Information:\n";
		cout<<"Order ID:";
		cin>>order_id;
		cout<<"Weight: ";
		cin>>weight;
		cout<<"Dimensions [LxWxH]: ";
		cin>>dim;
		cout<<"Shipment Time: ";
		cin>>time;
		customer->setName(name);
		customer->setID(customer_id);
		customer->setNumber(contactno);

		invoice->setorderID(order_id);
		invoice->setweight(weight);
		invoice->setdimension(dim);
		invoice->setshipmentTime(time);

	}
	void Order::Display(Address& A) {
		cout<<"Customer Info: \n";
		customer->Display(A);
		
		cout<<"\nPackage Info\n";
		invoice->Display();

	}
	Order::~Order() {
		delete invoice;
		delete customer;
	}

	///////////////////Definition of Class Mail Services////////////////////
	MailServices::MailServices(){}
	void MailServices::setserviceChoice() {
		cout << "We provide two types of Services -> Urgent and Regular\n\n";
		cout << "Press '0' for Regular\nPress '1' for Urgent (Urgent costs 20% extra)\n\nYour choice:";
		cin >> ch;
		
	}
	
	
	bool MailServices::getserviceChoice(){
		return ch;
	}


	///////////////////Definition of Class Sorting Section//////////////////////
	SortingSection::SortingSection() {}
	bool SortingSection::SameCity(Address& A){
		if (A.s_getCity() == A.r_getCity() && A.s_getCountry()==A.r_getCountry()) {
			return true;
		}
		else {
			return false;
		}
	}
	bool  SortingSection::International(Address& A) {
		if (A.s_getCountry() != A.r_getCountry()) {
			return true;
		}
		else {
			return false;
		}
	}

	//////////////////////Definition of Class Postal Worker//////////////////////////////
	PostalWorker::PostalWorker(){
		name = '\0';
		ID = '\0';
		city='\0';
	}
	PostalWorker::PostalWorker(string N, string id, string c) {
		name = N;
		ID = id;
		city=c;
	}
	void PostalWorker::setName(string Name) {
		name = Name;
	}
	void PostalWorker::setID(string Id) {
		ID = Id;
	}
	void PostalWorker::setCity(PostOffice& PO) {
		city = PO.getCity();
	}
	string PostalWorker::getName() {
		return name;
	}
	string PostalWorker::getID() {
		return ID;
	}
	string PostalWorker::getCity() {
		return city;
	}
	
	void PostalWorker::Display(PostOffice& PO){
		cout<<"Name: "<<getName()<<endl;
		cout<<"Worker ID: "<<getID()<<endl;
		cout<<"City: "<<getCity()<<endl;
		cout << "Branch Code: " << PO.getCode() << endl;
	}

	//////////////////////Definition of Class Postman/////////////////////////
	Postman::Postman() {}
	void Postman::Display(PostOffice& PO) {
		cout << "Name: " << getName() << endl;
		cout << "Worker ID: " << getID() << endl;
		cout << "City: " << getCity() << endl;
		cout << "Branch Code: " << PO.getCode() << endl;
	}
	
	
	//////////////////////Definition of Class Clerk/////////////////////////
	Clerk::Clerk() {}
	void Clerk::Display(PostOffice& PO) {
		cout << "Name: " << getName() << endl;
		cout << "Worker ID: " << getID() << endl;
		cout << "City: " << getCity() << endl;
		cout << "Branch Code: " << PO.getCode() << endl;
	}
	
	
	//////////////////////Definition of Class AccountOfficer/////////////////////////
	AccountOfficer::AccountOfficer() {}
	void AccountOfficer::Display(PostOffice& PO) {
		cout << "Name: " << getName() << endl;
		cout << "Worker ID: " << getID() << endl;
		cout << "City: " << getCity() << endl;
		cout << "Branch Code: " << PO.getCode() << endl;
	}

	///////////////////Definition of Class Payment///////////////////////

	Payment::Payment(){}
	float Payment::calculatePayment(Invoice& in, MailServices& MS) {
		float payment;
		float registration = 75;
		if (in.getweight() <= 1 && MS.getserviceChoice() == 0) {
			payment = 100 + registration;
			return payment;
		}
		else if (in.getweight() <= 3 && MS.getserviceChoice() == 0) {
			payment = 175 + registration;
			return payment;
		}
		else if (in.getweight() <= 5 && MS.getserviceChoice() == 0) {
			payment = 250 + registration;
			return payment;
		}
		else if (in.getweight() <= 10 && MS.getserviceChoice() == 0) {
			payment = 375 + registration;
			return payment;
		}
		else if (in.getweight() <= 15 && MS.getserviceChoice() == 0) {
			payment = 500 + registration;
			return payment;
		}
		else if (in.getweight() <= 20 && MS.getserviceChoice() == 0) {
			payment = 625 + registration;
			return payment;
		}
		else if (in.getweight() <= 25 && MS.getserviceChoice() == 0) {
			payment = 750 + registration;
			return payment;
		}
		else if (in.getweight() <= 30 && MS.getserviceChoice() == 0) {
			payment = 875 + registration;
			return payment;
		}
		else if (in.getweight() <= 1 && MS.getserviceChoice() == 1) {
			payment = (100 * 0.2) + 100 + registration;
			return payment;
		}
		else if (in.getweight() <= 3 && MS.getserviceChoice() == 1) {
			payment = (175 * 0.2) + 175 + registration;
			return payment;
		}
		else if (in.getweight() <= 5 && MS.getserviceChoice() == 1) {
			payment = (250 * 0.2) + 250 + registration;
			return payment;
		}
		else if (in.getweight() <= 10 && MS.getserviceChoice() == 1) {
			payment = (375 * 0.2) + 375 + registration;
			return payment;
		}
		else if (in.getweight() <= 15 && MS.getserviceChoice() == 1) {
			payment = (500 * 0.2) + 500 + registration;
			return payment;
		}
		else if (in.getweight() <= 20 && MS.getserviceChoice() == 1) {
			payment = (625 * 0.2) + 625 + registration;
			return payment;
		}
		else if (in.getweight() <= 25 && MS.getserviceChoice() == 1) {
			payment = (750 * 0.2) + 750 + registration;
			return payment;
		}
		else if (in.getweight() <= 30 && MS.getserviceChoice() == 1) {
			payment = (875 * 0.2) + 875 + registration;
			return payment;
		}
	}

	/////////////////////////////Definition of Class GPO/////////////////////////
	GPO::GPO(){
		postoffice = new PostOffice[100];
		city="Islamabad";
	}
	void GPO::SetPostOffices() {
		cout<<"Info of How many Post Offices would you like to enter: ";
		cin>>num;
		for (int i = 0; i < num; i++) {
			cout << "\n\nEnter Post Info of Post Office " << i + 1 << " : ";
			cout<<"\nEnter Branch code: ";
			cin >> t_code;
			cin.ignore();
			cout << "Enter Address: ";
			getline(cin,t_address);
			postoffice[i].setCode(t_code);
			postoffice[i].setAddress(t_address);
			postoffice[i].setCity(city);
		}
	}
	void GPO::getPostOffices() {
		cout<<"\n\nPost Offices Under the GPO are:\n";
		for (int i = 0; i < num; i++) {
			cout<<endl<<i+1<<")\n";
			postoffice[i].Display();
			cout<<endl;
		}
	}
