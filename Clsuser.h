#pragma once
#include<iostream>
#include<string>
class Clsuser
{
private:
	int Id;
	std::string Name;
	std::string Email;
	std::string Password;
	std::string Phone;
	std::string City;
	float Loaction;
public:
	
	// constructor user
	Clsuser(std::string emailemail, std::string name, std::string phone) {
		Email = emailemail; Name = name; Phone = phone;
	}

	//implementing login function - final
	virtual void Login(std::string Email, std::string Password) final {
		std::cout << "Logged In" << std::endl;
	}

	//implementing show orders function - pure virtual
	virtual void ShowOrders() = 0;

	//implementin display info function - override
	virtual void DisplayInfo() {
		std::cout << "User Name : " << Name << " - " << "User Email : " << Email << " - Phone : " << Phone << std::endl;
	}
};

