#pragma once
#include <iostream>
#include <string>
class ClsOrder
{
private:
	std::string CustomerName;
	int OrderNumber;
	std::string Food;
	std::string OrderStatus = "pending";
public:
	ClsOrder(std::string namecustomer,int numberorder, std::string foood ) {
		CustomerName = namecustomer; OrderNumber = numberorder; Food = foood;
	}

	void displayorder() {
		std::cout << "Receipt : " << std::endl;
		std::cout << "Customer : " << CustomerName << std::endl;
		std::cout << "Order No. : " << OrderNumber << std::endl;
		std::cout << "Order Name : " << Food << std::endl;
		std::cout << "OrderStatus : " << OrderStatus << std::endl;
	}
};

