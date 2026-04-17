//Restaurant System
#include <iostream>
#include<string>
#include "Clsclient.h"
#include "Clsuser.h"
#include "Clsadmin.h"
#include "Restaurant.h"
#include "ClsSystemManager.h"
using namespace std;
int main()
{
	//Welcome message
	cout << "Welcome To Restaurant System" << endl;
	
	cout << endl;

	
	
	ClsSystemManager sys;

	while(true){
		//(Client or Admin ?)
		cout << "For clients, enter 1 - for admins enter 2 - to exit, enter 0" << endl;
		cout << endl;
		int choice; cin >> choice;

		switch (choice) {

			//clients
		case 1: {
			cout << endl;
			cout << "Enter ur email...." << endl;
			string EmailUser; getline(cin >> ws, EmailUser);
			cout << endl;
			cout << "Enter ur name..." << endl;
			string NameUser; getline(cin >> ws, NameUser);
			cout << endl;
			cout << "Enter ur number..." << endl;
			string UserNumber; getline(cin >> ws, UserNumber);
			cout << endl;
			cout << "Enter delivery location..." << endl;
			string DelivLoc; getline(cin >> ws, DelivLoc);
			cout << endl;
			cout << "Enter flat..." << endl;
			int Flat; cin >> Flat;
			cout << endl;
			cout << "Enter floor..." << endl;
			int Floor; cin >> Floor;

			Clsclient Client(Flat, Floor, DelivLoc, EmailUser, NameUser, UserNumber);

			cout << endl;

			cout << "Welcome " << NameUser << "!" << endl;
			cout << endl;

			cout << "what number of orders do u want to make ?" << endl;
			int HowManyOrd; cin >> HowManyOrd;
			cout << endl;
			for (int i = 0; i < HowManyOrd; i++) {

				cout << "Enter ur Order :" << endl;
				string UserOrderorder; getline(cin >> ws, UserOrderorder);
				ClsOrder UserOrder2(NameUser, i + 1, UserOrderorder);
				sys.AddOrder(UserOrder2);
				cout << endl;
			}
			sys.Displayallorders();
			cout << endl;
			cout << "Thank u for ordering!" << endl;
			cout << endl;
			break;
		}

			  //admins
		case 2: {

			cout << endl;
			cout << "Enter ur name..." << endl;
			string adminname; getline(cin >> ws, adminname);
			cout << endl;
			cout << "Enter ur email..." << endl;
			string adminemail; getline(cin >> ws, adminemail);
			cout << endl;
		again:
			cout << "Enter ur password..." << endl;
			int adminpass; cin >> adminpass; //pass 1111
			if (adminpass != 1111) {
				cout << endl; cout << "Wrong Password!" << endl; cout << endl; goto again;
			}
			cout << endl;
			cout << "Enter ur phone..." << endl;
			string adminphone; getline(cin >> ws, adminphone);
			cout << endl;

			Clsadmin admin("Admin", adminpass, adminemail, adminname, adminphone);

			cout << "Welcome " << adminname << "!" << endl;
			cout << endl;

			cout << "To add restaurant , enter 1 - To show all orders, enter 2" << endl;
			int adminchoice; cin >> adminchoice;
			cout << endl;
			switch (adminchoice) {
				//add restaurant
			case 1: {
				cout << "How many restaurants u want to add ?" << endl;
				int restnum; cin >> restnum;
				cout << endl;
				for (int j = 0; j < restnum; j++) {
					cout << "Enter restaurant name..." << endl;
					string RestName; getline(cin >> ws, RestName);
					cout << endl;
					cout << "Enter restaurant tax..." << endl;
					int RestTax; cin >> RestTax;
					cout << endl;
					cout << "Enter restaurant number..." << endl;
					int RestTele; cin >> RestTele;
					cout << endl;
					Restaurant rest(RestName, RestTax, RestTele, adminemail, adminname, adminphone);
					admin.Add(sys, rest);
					cout << endl;
				}
				cout << endl;
				sys.ShowAllRestaurant();
				cout << endl;
				break;
			}
			case 2: {
				sys.Displayallorders(); cout << endl; break;
			}
				  
			}
			break;
		}
		case 0: { cout << endl; cout << "Thank u for trying my system" << endl; cout << endl; 
			cout << "BY : Omar  , Student at Obour University For Science and Technology." << endl;
			return 0; }
		}
	}

	cout << endl;
	cout << "BY : Omar  , Student at Obour University For Science and Technology." << endl;
	
}
