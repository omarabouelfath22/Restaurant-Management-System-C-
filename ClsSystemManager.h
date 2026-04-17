#pragma once
#include <iostream>
#include <string>
#include<vector>
#include <fstream>
#include "Clsclient.h"
#include "Restaurant.h"
#include "ClsOrder.h"

class ClsSystemManager
{
	std::vector<Clsclient> Client;
	std::vector<Restaurant> Rest;
	std::vector<ClsOrder> Ord;
public:
	void AddOrder(ClsOrder NewOrder) {
		Ord.push_back(NewOrder);
		//text file to put orders in it
		std::ofstream File("OrdersLog.txt", std::ios::app);
		if (File.is_open()) {
			File << "New Order Added Successfully!" << std::endl;
			File.close();
		}
	}

	void Displayallorders() {
		std::cout << "All Orders : " << std::endl;

		if (Ord.empty()) {
			std::cout << "no orders added yet" << std::endl;
		}

		for (ClsOrder &x : Ord) {
			std::cout << std::endl;
			x.displayorder();
			std::cout << "----------------------" << std::endl;
		}
	}

	void AddRestaurant(Restaurant NewRest) {
		Rest.push_back(NewRest);
	}

	void ShowAllRestaurant() {
		std::cout << "All Restaurant :" << std::endl;
		for (Restaurant& r : Rest) {
			r.DisplayInfo();
		}
	}
};

