/*
Umar Qazi
20i-0968
section:B
Semester Project
*/
#include "Definition.cpp"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
	PostOffice o1;
	Address o2;
	Customer o3;
	Invoice o4;
	Order o5;
	MailServices o6;
	SortingSection o7;
	PostalWorker o8;
	Postman o9;
	Clerk o10;
	AccountOfficer o11;
	Payment o12;
	GPO o13;
	string customer_name,contactno, dim,time;
	int customerid,orderid;
	int s_hno,s_st,r_hno,r_st,wt;
	string s_sec,s_city,r_sec,r_city, s_cnt, r_cnt;
	bool User;

		cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
		cout << "\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
		cout << "\n----------------------------------WELCOME TO PAKISTAN POST-------------------------------";
		cout << "\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
		cout << "\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";

	cout << "Are you an Employee or a Customer?\n";
	cout << "Press '1' for Customer\n";
	cout << "Press '0' for Employee\n";
	cout << "Enter: ";
	cin >> User;
cin.ignore();
	if (User == 1) {


		cout << "Enter Customer Information\n";
		cout << "Name: ";
		getline(cin, customer_name);
		cout << "Enter 4 digit CustomerID for your registration: ";
		cin >> customerid;
		cin.ignore();
		cout << "Enter Contact Number: ";
		getline(cin, contactno);
		o3.setName(customer_name);
		o3.setID(customerid);
		o3.setNumber(contactno);
		cout << "\nHit ENTER key to place an Order...";
		do {
			cout << '\n';
		} while (cin.get() != '\n');

		cout << "Sender Info:\n";
		cout << "House no: ";
		cin >> s_hno;
		cout << "Street no: ";
		cin >> s_st;
		cin.ignore();
		cout << "Sector: ";
		getline(cin, s_sec);
		cout << "City: ";
		getline(cin, s_city);
		o2.s_setHouse(s_hno);
		o2.s_setStreet(s_st);
		o2.s_setSector(s_sec);
		o2.s_setCity(s_city);
		o2.s_setCountry();

		cout << "\nReceiver Info:\n";
		cout << "House no: ";
		cin >> r_hno;
		cout << "Street no: ";
		cin >> r_st;
		cin.ignore();
		cout << "Sector: ";
		getline(cin, r_sec);
		cout << "City: ";
		getline(cin, r_city);
		cout << "Country: ";
		getline(cin, r_cnt);
		o2.r_setHouse(r_hno);
		o2.r_setStreet(r_st);
		o2.r_setSector(r_sec);
		o2.r_setCity(r_city);
		o2.r_setCountry(r_cnt);

		cout << "\nEnter Package Info\n";
		cout << "Enter weight in Kgs: ";
		cin >> wt;
		cout << "Assign 4 Digit OrderID to your Package: ";
		cin >> orderid;
		cin.ignore();
		cout << "Enter Dimensions in the Following Format\n[LxWxH]: ";
		getline(cin, dim);
		cout << "Enter Time of Shipment(24h Format):  ";
		getline(cin, time);
		o4.setorderID(orderid);
		o4.setweight(wt);
		o4.setdimension(dim);
		o4.setshipmentTime(time);
		cout << "\n";
		o6.setserviceChoice();

		/////////////////////////Displaying the Entered Info//////////////////////////
		cout << "\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
		cout << "\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
		cout << "\n----------------Kindly Review the Information You Entered-------------";
		cout << "\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
		cout << "\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
		o3.Display(o2);
		cout << "\n";
		o2.r_Display();
		cout << "\nPackage Info\n";
		o4.Display();
		if (o6.getserviceChoice() == 0) {
			cout << "\nYou have Opted for Regular Mail Service\n";
		}
		else {
			cout << "\nYou have Opted for Urgent Mail Service\n";
		}

		cout << endl << s_city << "-->" << r_city << endl;
		cout << o2.s_getCountry() << "-->" << o2.r_getCountry() << endl << endl;

		if (o7.International(o2) == 1) {
			cout << "\nInternational Delivery!\n";
		}
		else if (o7.SameCity(o2) == 1) {
			cout << "Same City! \nMail will be delivered on the Same day  :-)\n";
		}
		else if (o7.SameCity(o2) == 0 && o7.SameCity(o2) == 0) {
			cout << "Same Country Different City!  \nMail will be delivered the Next day :-| \n";
		}

		cout << "\n\nPayable amount is: Rs." << o12.calculatePayment(o4, o6) << "/-\n";

		/////////////////////////writing in File////////////////////
		ofstream write("Order.txt");
		write << "Customer Info:\n";
		write << "Name: " << o3.getName() << endl << "ID: " << o3.getID() << endl << "Contact No: " << o3.getNumber() << endl << endl;
		write << "Sender Address: \n";
		write << "House no:" << o2.s_getHouse() << ", Street no: " << o2.s_getStreet() << ", Sector: " << o2.s_getSector();
		write << endl << "City: " << o2.s_getCity() << endl;

		write << "\nReceiver Address: \n";
		write << "House no:" << o2.r_getHouse() << ", Street no: " << o2.r_getStreet() << ", Sector: " << o2.r_getSector();
		write << endl << "City: " << o2.r_getCity() << ", " << o2.r_getCountry() << endl;

		write << "\nPackage Info\n";
		write << "Order ID: " << o4.getorderID() << endl << "Weight: " << o4.getweight() << endl << "Dimension: " << o4.getdimension();
		write << endl << "Shipment Time: " << o4.getshipmentTime();
		write << "\n\nPayable amount is: Rs." << o12.calculatePayment(o4, o6) << "/-\n";
		write.close();

	}

	else {
	int workerchoice;
	int password=1236,p1;
	string empname="Umar Qazi",empid="897734";
	
	o1.setCode(7470);
	o1.setAddress("G-9 Markaz");
	o1.setCity("Islamabad");
	
	cout << "\nAre you a Clerk, Postman or Account Officer?\n\n";
	cout << "Press '1' for Clerk\nPress '2' for Postman\nPress '3' for Head Officer(preferred)\n";
	cout << "Enter: ";
	cin >> workerchoice;
	cin.ignore();
	if (workerchoice == 1) {
		cout << "\n------------------Clerk-----------------------\n";
		cout<<"Enter Password[1236]: ";
		cin>>p1;
		if(p1==password){
		o10.setName(empname);
		o10.setID(empid);
		o10.setCity(o1);
		o10.Display(o1);
	}
	else{
		cout<<"Incorrect Password!";
		exit(0);
	}
	}
	else if (workerchoice == 2) {
		cout << "\n------------------Postman-----------------------\n";
		cout<<"Enter Password[1236]: ";
		cin>>p1;
		if(p1==password){
		o9.setName(empname);
		o9.setID(empid);
		o9.setCity(o1);
		o9.Display(o1);
	}
	else{
		cout<<"Incorrect Password!";
		exit(0);
	}
	}
	else if (workerchoice == 3) {
		cout << "\n------------------Head-----------------------\n";
		cout<<"Enter Password [1236]: ";
		cin>>p1;
		if(p1==password){
		o11.setName(empname);
		o11.setID(empid);
		o11.setCity(o1);
		o11.Display(o1);
		o13.SetPostOffices();
		o13.getPostOffices();
		
	}

	
	else{
		cout<<"Incorrect Password!";
		exit(0);
	}
}
}





















	///-------------------------------------------------------------------------------Rough Work--------------------------------------------------------------------------------------

//	cout<<endl<<"------------------------PostOffice Class---------------------------\n";
//	o1.Display();
//	o1.setCode(7470);
//	o1.setAddress("G-9 Markaz");
//	o1.setCity("Islamabad");
//	
//

//	cout<<endl<<"------------------------Address Class---------------------------\n";
//	o2.Display();
	
//	cout<<endl<<"------------------------Customer Class---------------------------\n";
//	o3.Display(o2);

//	cout << endl << "------------------------Invoice Class---------------------------\n";
//	o4.Display();
//	cout << endl << "------------------------Order Class Input---------------------------\n";
//	o5.setOrder();
//	

//	cout << endl << "------------------------Order Class Display---------------------------\n";
//	o5.Display(o2);
//cout<<endl<<s_city<<"-->"<<r_city<<endl;
//cout << endl << o2.s_getCountry() << "-->" << o2.r_getCountry() << endl;
//
//	cout << endl << "------------------------MailServices Class Display---------------------------\n";
//	o6.setserviceChoice();
//	if(o6.getserviceChoice()==0){
//		cout<<"You have Opted for Regular Mail Service\n";
//	}
//	else{
//		cout<<"You have Opted for Urgent Mail Service\n";
//	}
//	
//
//	cout << endl << "------------------------SortingSection Class Display---------------------------\n";
//	if (o7.International(o2) == 1) {
//		cout << "\nInternational Delivery!\n";
//	}
//	else if(o7.SameCity(o2)==1){
//		cout << "Same City! \nMail will be delivered on the Same day  :-)\n";
//	}
//	else if(o7.SameCity(o2)==0 && o7.SameCity(o2) == 0){
//		cout << "Same Country Different City!  \nMail will be delivered the Next day :-| \n";
//	}
//
//	cout << endl << "------------------------PostalWorker Class Display---------------------------\n";
//
//	o8.setName("Umar");
//	o8.setID("2468");
//	o8.setCity(o1);
//	o8.Display(o1);
//
//
//	cout << endl << "------------------------Postalman Class Display---------------------------\n";
//	o9.setName("Umar");
//	o9.setID("2468");
//	o9.setCity(o1);
//	o9.Display(o1);
//
//	cout << endl << "------------------------Clerk Class Display---------------------------\n";
//	o10.setName("Umar");
//	o10.setID("2468");
//	o10.setCity(o1);
//	o10.Display(o1);
//
//	cout << endl << "------------------------AccountOfficer Class Display---------------------------\n";
//	o11.setName("Umar");
//	o11.setID("2468");
//	o11.setCity(o1);
//	o11.Display(o1);
//
//	cout << endl << "------------------------Payment Class Display---------------------------\n";
//	cout<<"\nPayable amount is: Rs."<<o12.calculatePayment(o4, o6)<<"/-\n";
//	
}
