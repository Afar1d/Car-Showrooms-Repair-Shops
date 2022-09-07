#include<iostream>
#include "Customer.h"
#include "Admin.h"
#include"Cars.h"
#include"Car_Service.h"
/*
 	"==============================================================================================================\n";
	"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n";
	"░░░███████████████░░░░██████████████░░░░░░███████████████████░░░████░░░░░░░░░░░░░░░░░████░░████████████░░░░░░░\n";
	"░░░███████████████░░░████████████████░░░░░████░░░░░░░░░░░████░░░░████░░░░░░░░░░░░░░░████░░░░░░░████░░░░░░░░░░░\n";
	"░░░█████░░░░░░░░░░░░░████░░░░░░░░████░░░░░████░░░░░░░░░░░████░░░░░░████░░░░░░░░░░░████░░░░░░░░░████░░░░░░░░░░░\n";
	"░░░█████░░░░░░░░░░░░░████░░░░░░░░████░░░░░███████████████████░░░░░░░░████░░░░░░░████░░░░░░░░░░░████░░░░░░░░░░░\n";
	"░░░█████░░░░░░░░░░░░░████░░░░░░░░████░░░░░████░░░░░░████░░░░░░░░░░░░░░░████░░░████░░░░░░░░░░░░░████░░░░░░░░░░░\n";
	"░░░█████░░░░░░░░░░░░░████░░░░░░░░████░░░░░████░░░░░░░░████░░░░░░░░░░░░░░████████░░░░░░░░░░░░░░░████░░░░░░░░░░░\n";
	"░░░███████████████░░░████████████████░░░░░████░░░░░░░░░░████░░░░░░░░░░░░░██████░░░░░░░░░░░░░░░░████░░░░░░░░░░░\n";
	"░░░███████████████░░░░██████████████░░░░░░████░░░░░░░░░░░░████░░░░░░░░░░░░░██░░░░░░░░░░░░░░████████████░░░░░░░\n";
	"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n";
	"==============================================================================================================\n";
	"Part of this code is developed By (Eng.Ahmed Mohamed Farid) AKA (CORVI) ASU_FCIS.=============================\n";
	"==============================================================================================================\n";
	"E-MAIL : ahmedmfarid339@gmail.com || Github for Source code : github.com/Afar1d.==============================\n";
	"==============================================================================================================\n";
*/
using namespace std;
int continue1 = -1;
Admin a1;
Customer c1;
Cars car;
Showrooms sh;
Garages g1;
Service s1;
Service_Process sp1;
Buy_Rent br1;
int main()
{
	// Code By AMF & EHS 

	cout << "-----------------------------------------------------------------\n";
	cout << "------ Car Showrooms & Repair Shops -----------------------------\n";
	cout << "-----------------------------------------------------------------\n";
	while (continue1 != 0)
	{
		cout << "(1) Login   (2) Register  (3)Exit \n ";
		cout << "---------------------------------------------------------------";
		cout << endl << "Enter Your Select : ";
		string select, select2, select3;


		cin >> select;
		cout << "----------------------------------------------------------------" << endl;
		//login menu
		if (select == "1")
		{
			cout << "(1) Login as Admin    (2) Login as a customer  (3) back \n ";
			cout << "----------------------------------------------------------------" << endl;
			cout << "Enter your select : ";
			cin >> select2;
			cout << "----------------------------------------------------------------" << endl;
			// Login as Admin
			if (select2 == "1")
			{
				a1.Admin1(a1);
				string user, pass;
				cout << "Enter your username : ";
				cin >> user;
				cout << "Enter your password : ";
				cin >> pass;
				cout << "----------------------------------------------------------------" << endl;
				// if he is realy is member
				if (a1.Login(user, pass) == true)
				{
					int h = -1;
					while (h != 0) {
						cout << "Welcome To Admin Page\n";
						cout << "Please Select a Section : \n";
						cout << "----------------------------------------------------------------" << endl;
						cout << "(1) cars   (2) showrooms  (3) garages (4) services (5) Sign Out\n";
						cout << "----------------------------------------------------------------" << endl;
						cout << "Enter your select : ";

						cin >> select3;
						cout << "----------------------------------------------------------------" << endl;
						// cars sections
						if (select3 == "1")
						{
							int u = 1;
							while (u != 0) {
								cout << "Welcome To cars sections\n";
								cout << "----------------------------------------------------------------" << endl;
								cout << "(1) Add   (2) Update  (3) Delete (4) Show Car  (6) back\n";
								cout << "----------------------------------------------------------------" << endl;
								cout << "Enter your select : ";
								cin >> select3;
								cout << "----------------------------------------------------------------" << endl;

								if (select3 == "1")
								{
									car.set_cars(car);
								}
								else if (select3 == "2")
								{
									car.update();
								}
								else if (select3 == "3")
								{
									car.delete_car();
								}
								else if (select3 == "4")
								{
									car.show_cars(1);
								}


								if (select3 == "6")
								{
									u = 0;
									h = 1;
								}
								else 
								{
									cout << "----------------------------------------------------------------" << endl;
									cout << "press 1 to Back Or 2 for Exit Cars section\n";
									cout << "Enter your select : ";
									cin >> u;
									cout << "----------------------------------------------------------------" << endl;

									if (u == 2)
									{
										u = 0;
										h = 1;
									}

								}

							}

						}
						// showrooms section
						else if (select3 == "2")
						{
							int u = 1;
							while (u != 0) {
								cout << "Welcome To showrooms section\n";
								cout << "----------------------------------------------------------------" << endl;
								cout << "(1) Add   (2) Update  (3) Delete (4) Display showroom (5) back\n";
								cout << "----------------------------------------------------------------" << endl;
								cout << "Enter your select : ";
								cin >> select3;
								cout << "----------------------------------------------------------------" << endl;

								if (select3 == "1")
								{
									sh.showr_data(sh);
								}
								else if (select3 == "2")
								{
									sh.update_showr();
								}
								else if (select3 == "3")
								{
									sh.delete_showr();
								}
								else if (select3 == "4")
								{
									sh.display_showr(1);
								}
								if (select3 == "5")
								{
									u = 0;
									h = 1;
								}

								else {
									cout << "----------------------------------------------------------------" << endl;
									cout << "press 1 to Back Or 2 for Exit showrooms section\n";
									cout << "Enter your select : ";
									cin >> u;
									cout << "----------------------------------------------------------------" << endl;

									if (u == 2)
									{
										u = 0;
										h = 1;
									}

								}
							}

						}
						//garage section
						else if (select3 == "3")
						{
							int u = 1;
							while (u != 0) {
								cout << "Welcome To garage section\n";
								cout << "----------------------------------------------------------------" << endl;
								cout << "(1) Add   (2) Update  (3) Delete (4) Display garage (5) back\n";
								cout << "----------------------------------------------------------------" << endl;
								cout << "Enter your select : ";
								cin >> select3;
								cout << "----------------------------------------------------------------" << endl;

								if (select3 == "1")
									g1.set_Gararge(g1);
								else if (select3 == "2")
									g1.update_Garage();
								else if (select3 == "3")
									g1.delete_Garage();
								else if (select3 == "4")
									g1.Display_Garage(1);

								if (select3 == "5")
								{
									u = 0;
									h = 1;
								}

								else
								{
									cout << "----------------------------------------------------------------" << endl;
									cout << "press 1 to Back Or 2 for Exit garage section\n";
									cout << "Enter your select : ";
									cin >> u;
									cout << "----------------------------------------------------------------" << endl;

									if (u == 2)
									{
										u = 0;
										h = 1;
									}

								}
							}
						}
						//Service section
						else if (select3 == "4")
						{
							int u = 1;
							while (u != 0) {
								cout << "Welcome To service section\n";
								cout << "----------------------------------------------------------------" << endl;
								cout << "(1) Add   (2) Update  (3) Delete (4) Display service (5) back\n";
								cout << "----------------------------------------------------------------" << endl;
								cout << "Enter your select : ";
								cin >> select3;
								cout << "----------------------------------------------------------------" << endl;

								if (select3 == "1")
									s1.set_Services(s1);
								else if (select3 == "2")
									s1.update_service();
								else if (select3 == "3")
									s1.delete_service();
								else if (select3 == "4")
									s1.display_service(1);
								if (select3 == "5")
								{
									u = 0;
									h = 1;
								}

								else
								{
									cout << "----------------------------------------------------------------" << endl;
									cout << "press 1 to Back Or 2 for Exit service section\n";
									cout << "Enter your select : ";
									cin >> u;
									cout << "----------------------------------------------------------------" << endl;

									if (u == 2)
									{
										u = 0;
										h = 1;
									}

								}

							}
						}

						// Exit
						else if (select3 == "5")
						{
							h = 0;

							main();
						}

					}
				}
				else
					cout << "Wrong username or password\n";

			}
			// Login as a customer
			else if (select2 == "2")
			{
				c1.customer1(c1);
				string user, pass;
				cout << "Enter your username : ";
				cin >> user;
				cout << "Enter your password : ";
				cin >> pass;
				cout << "----------------------------------------------------------------" << endl;
				//when u log in
				if (c1.Login(user, pass) == true)
				{
					//cout << "Welcome ya norm\n";
					int h = -1;
					while (h != 0) {
						cout << "Welcome To Customer Page\n";
						cout << "Please Select a Section : \n";
						cout << "------------------------------------------------------------------------------------------------------" << endl;
						cout << "(1) Search   (2) View list of data  (3) BooK a garages appointment (4) buy/ rent a car (5) Sign Out\n";
						cout << "------------------------------------------------------------------------------------------------------" << endl;
						cout << "Enter your select : ";

						cin >> select3;
						cout << "----------------------------------------------------------------" << endl;
						// Search sections
						if (select3 == "1")
						{
							int u = 1;
							while (u != 0) {
								cout << "What do u want to search about : \n";
								cout << "----------------------------------------------------------------" << endl;
								cout << "(1) Car   (2) Service  (3) showroom  (4) Garage (5) back\n";
								cout << "----------------------------------------------------------------" << endl;
								cout << "Enter your select : ";
								cin >> select3;
								cout << "----------------------------------------------------------------" << endl;

								//search about car
								if (select3 == "1")
									car.show_cars(0);
								//search about service
								else if (select3 == "2")
									s1.display_service(0);
								//search about showroom
								else if (select3 == "3")
									sh.display_showr(0);
								//search about garage
								else if (select3 == "4")
									g1.Display_Garage(0);

								//back
								if (select3 == "5")
								{
									u = 0;
									h = 1;
								}
								//exit
								else
								{
									cout << "----------------------------------------------------------------" << endl;
									cout << "press 1 to Back Or 2 for Exit Search section\n";
									cout << "Enter your select : ";
									cin >> u;
									cout << "----------------------------------------------------------------" << endl;

									if (u == 2)
									{
										u = 0;
										h = 1;
									}

								}
							}
						}
						// View list of data 
						else if (select3 == "2")
						{
							int u = 1;
							while (u != 0) {
								cout << "What do u want to search about : \n";
								cout << "----------------------------------------------------------------" << endl;
								cout << "(1) showroom  (2) Garage (3) back\n";
								cout << "----------------------------------------------------------------" << endl;
								cout << "Enter your select : ";
								cin >> select3;
								cout << "----------------------------------------------------------------" << endl;
								//search about showroom
								if (select3 == "1")
									sh.display_showr(0);
								//search about garage
								else if (select3 == "2")
									g1.Display_Garage(0);

								//back
								if (select3 == "3")
								{
									u = 0;
									h = 1;
								}
								//exit
								else
								{
									cout << "----------------------------------------------------------------" << endl;
									cout << "press 1 to Back Or 2 for Exit Search section\n";
									cout << "Enter your select : ";
									cin >> u;
									cout << "----------------------------------------------------------------" << endl;

									if (u == 2)
									{
										u = 0;
										h = 1;
									}

								}
							}
						}
						// BooK a garages its Service Process
						else if (select3 == "3")
							sp1.set_appointment(sp1);
						// buy/ rent a car
						else if (select3 == "4")
						{
							car.show_cars(0);

							br1.set_car(br1);
						}

						// Exit
						else if (select3 == "5")
						{
							h = 0;

							main();
						}
					}
				}
				else
					cout << "Wrong username or password\n";
			}
			// Exit
			else if (select2 == "3")
			{
				main();
			}


		}
		// Register menu
		else if (select == "2")
		{
			cout << "(1) Register as Admin    (2) Register as a customer  (3) back \n ";
			cout << "Enter your select : ";
			cin >> select2;
			cout << "----------------------------------------------------------------" << endl;
			if (select2 == "1")
			{
				a1.set_data(a1);
			}
			else if (select2 == "2")
			{
				c1.set_data(c1);
			}

			else if (select == "3")
				exit(0);



		}
		// Exit
		else if (select == "3")
			exit(0);
		else
			cout << " Select Number From Menu \n ";

		main();
	}

	return 0;
}
