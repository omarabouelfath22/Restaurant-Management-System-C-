#pragma once
#include<iostream>
#include<string>
#include "ClsOrder.h"
#include "Clsuser.h"
class Clsclient : public Clsuser
{
private:
	int Flat;
	int Floor;
	std::string Delivlocation;
	std::string SecondPhone;
public:

	//constructor of client
	Clsclient(int flat, int floor, std::string delivlocation, std::string emailemail, std::string name, std::string phone) : Clsuser(emailemail, name, phone) {
		Flat = flat;  Floor = floor; Delivlocation = delivlocation; 
	}

	//We put it here because client is inheriting from user class which is abstract
	void ShowOrders() {
		std::cout << "show orders from client" << std::endl;
	}

	//overide from user
	void DisplayInfo() {
		Clsuser::DisplayInfo();
		std::cout << "Flat : " << Flat << " - " << "Floor : " << Floor << std::endl;
	}

	ClsOrder SendOrders(std::string nameofcustomer,int numberoforder, std::string foodtype) {
		ClsOrder order(nameofcustomer,numberoforder, foodtype);
		return order;
		
	}


};

