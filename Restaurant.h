#pragma once
#include<iostream>
#include<string>
#include "Clsuser.h"
#include "Clsclient.h"
class Restaurant : public Clsuser 
{
private:
	std::string Logo;
	int Taxcard;
	int Telephone;
public:

	//constructor restaurant
	Restaurant(std::string logolog, int taxtax, int tele, std::string emailemail, std::string name, std::string phone) : Clsuser(emailemail, name, phone) {
		Logo = logolog; Taxcard = taxtax; Telephone = tele;
	}

	//We put it here because client is inheriting from user class which is abstract
	void ShowOrders() {
		std::cout << "Show orders from restaurant "  << std::endl;
	}

	//overide from user
	void DisplayInfo() {
		std::cout << "Logo : " << Logo << " - " << "Taxcard : " << Taxcard << " - " << "Telephone : " << Telephone << std::endl;
	}

	
};

