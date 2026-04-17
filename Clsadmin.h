#pragma once
#include<iostream>
#include<string>
#include "Clsuser.h"
#include "ClsRepository.h"
#include "ClsSystemManager.h"
#include "Restaurant.h"
class Clsadmin : public Clsuser
{
private:
	std::string Jobname; 
	int Pass;
public:

	//constructor admin
	Clsadmin(std::string jobnamejob, int adminpass, std::string Email, std::string Name, std::string Phone) : Clsuser(Email, Name, Phone) {
		Jobname = jobnamejob; Pass = adminpass;
	}
	

	//We put it here because client is inheriting from user class which is abstract
	void ShowOrders() {
		std::cout << "show orders from admin" << std::endl;
	}

	//overide from user
	void DisplayInfo() {
		Clsuser::DisplayInfo();
		std::cout << "Job Name : " << Jobname << std::endl;
	}


	void Add(ClsSystemManager &System, Restaurant NewRest) {
		System.AddRestaurant(NewRest);
		std::cout << "Admin Added " <<"Restaurant Successfully!" << std::endl;
	}


	std::string GetAll() {
		return "";
	}
};

