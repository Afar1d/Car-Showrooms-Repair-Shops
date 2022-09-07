#include "Cars.h"
#include<iostream>
static vector<Cars> car_vec;
static vector<Showrooms> sh_vec;

void Cars::set_cars(Cars car)
{
	cout << "---------------------------------------------";
	cout << endl << "   Enter car id   : ";
	cin >> car.car_id;
	cout << endl << "   Enter the maker : ";
	cin >> car.make;
	cout << endl << "   Enter the model : ";
	cin >> car.model;
	cout << endl << "   Enter year : ";
	cin >> car.year;
	cout << endl << "   Enter the price : ";
	cin >> car.price;
	car_vec.push_back(car);

}
void Cars::show_cars(int type)
{

	int id = 0, year = 0;
	string model;
	if (type)
	{
		cout << " Enter car Id : ";
		cin >> id;
	}
	else
	{
		cout << " Enter car Model : ";
		cin >> model;
		cout << " Enter car Year : ";
		cin >> year;
	}
	for (int i = 0; i < car_vec.size(); i++)
	{
		if (id == car_vec.at(i).car_id || (model == car_vec.at(i).model && year == car_vec.at(i).year))
		{
			cout << "---------------------------------------------";
			cout << endl << " Car id   : " << car_vec.at(i).car_id;
			cout << endl << " The maker : " << car_vec.at(i).make;
			cout << endl << " The model : " << car_vec.at(i).model;
			cout << endl << " Year : " << car_vec.at(i).year;
			cout << endl << " The price : " << car_vec.at(i).price;
			cout << "\n---------------------------------------------\n";
			return;
		}

	}
	if (type)
		cout << " Enter valid id\n";
	else
		cout << " Enter valid Data\n";
}
void Cars::update()
{
	int id;
	cout << "Enter car id that you want to update : ";
	cin >> id;
	int count = -1;
	for (int i = 0; i < car_vec.size(); i++)
	{
		if (id == car_vec.at(i).car_id)
		{
			cout << "-------------------------------------------";
			cout << endl << " Car id   : " << car_vec.at(i).car_id;
			cout << endl << " The maker : " << car_vec.at(i).make;
			cout << endl << " The model : " << car_vec.at(i).model;
			cout << endl << " Year : " << car_vec.at(i).year;
			cout << endl << " Yhe price : " << car_vec.at(i).price;
			cout << "\n-------------------------------------------\n";
			count = i;

		}

	}
	if (count == -1)
	{
		cout << "Enter valid id";
		update();
	}
	else
	{
		cout << "Enter new data " << endl;
		cout << "---------------------------------------------";
		cout << endl << "   Enter car id   : ";
		cin >> car_vec.at(count).car_id;
		cout << endl << "   Enter the maker : ";
		cin >> car_vec.at(count).make;
		cout << endl << "   Enter the model : ";
		cin >> car_vec.at(count).model;
		cout << endl << "   Enter year : ";
		cin >> car_vec.at(count).year;
		cout << endl << "   Enter the price : ";
		cin >> car_vec.at(count).price;
	}

}
void Cars::delete_car()
{
	int id;
	cout << "Enter car id : ";
	cin >> id;
	int count = -1;
	vector<Cars>::iterator it;
	for (int i = 0; i < car_vec.size(); i++)
	{
		if (id == car_vec.at(i).car_id)
		{
			count = i;
		}
	}
	it = car_vec.begin() + count;
	car_vec.erase(it);
	cout << "--------------------------------------------------\n";
	cout << "Deleted successfully. \n";
}
void Cars::delete_now(int id)
{
	int count = -1;
	vector<Cars>::iterator it;
	for (int i = 0; i < car_vec.size(); i++)
	{
		if (id == car_vec.at(i).car_id)
		{
			count = i;
		}
	}
	it = car_vec.begin() + count;
	car_vec.erase(it);

}
//==============================================================================//
void Showrooms::showr_data(Showrooms sh)
{
	cout << "---------------------------------------------";
	cout << endl << "   Enter Showrooms id  : ";
	cin >> sh.showR_ID;
	cout << endl << "   Enter Showrooms Name : ";
	cin >> sh.name;
	cout << endl << "   Enter Showrooms location : ";
	cin >> sh.location;
	cout << endl << "   Enter Showrooms phone_num : ";
	cin >> sh.phone;
	// Enter cars id
	int c = -1;
	cout << "\n   Add car (1 for YES, 0 for NO) : ";
	cin >> c;
	while (c != 0)
	{
		ll id;
		cout << "----------------------------------------------------------------" << endl;
		cout << "   Enter car id : ";
		cin >> id;
		int count = -1;
		for (int i = 0; i < car_vec.size(); i++)
		{
			if (id == car_vec.at(i).car_id)
			{
				count = i;
			}

		}
		if (count == -1)
		{
			cout << "   Enter valid id\n";
			c = -1;
		}
		else
		{
			cout << "   Car is successfully Added. \n";
			//Add the fucking cars
			sh.cars.push_back(car_vec.at(count));
		}
		cout << "----------------------------------------------------------------" << endl;
		cout << "press 1 to add another Car Or 0 to exit : ";
		cin >> c;

	}
	sh_vec.push_back(sh);
}
void Showrooms::display_showr(int type)
{
	int id = 0;
	string name;
	if (type)
	{
		cout << " Enter Showrooms Id : ";
		cin >> id;
	}
	else
	{
		cout << " Enter Showrooms Name : ";
		cin >> name;
	}

	for (int i = 0; i < sh_vec.size(); i++)
	{
		if (id == sh_vec.at(i).showR_ID || name == sh_vec.at(i).name)
		{
			cout << "---------------------------------------------";
			cout << endl << " Showroom id   : " << sh_vec.at(i).showR_ID;
			cout << endl << " Showroom Name : " << sh_vec.at(i).name;
			cout << endl << " Showroom location : " << sh_vec.at(i).location;
			cout << endl << " Showroom phone_num : " << sh_vec.at(i).phone;
			if (sh_vec.at(0).cars.empty())
			{
				cout << "\n Showroom has No Cars in it. ";
			}
			else
			{
				cout << "\n---------------------------------------------\n";
				cout << " CARS IN SHOWROOM ";
				for (int j = 0; j < sh_vec.at(i).cars.size(); j++)
				{
					cout << "\n---------------------------------------------";
					cout << endl << " Car id   : " << sh_vec.at(i).cars.at(j).car_id;
					cout << endl << " The maker : " << sh_vec.at(i).cars.at(j).make;
					cout << endl << " The model : " << sh_vec.at(i).cars.at(j).model;
					cout << endl << " Year : " << sh_vec.at(i).cars.at(j).year;
					cout << endl << " The price : " << sh_vec.at(i).cars.at(j).price;
					cout << "\n---------------------------------------------\n";
				}

			}
			cout << "\n---------------------------------------------\n";
			return;
		}

	}
	if (type)
		cout << " Enter valid id\n";
	else
		cout << " Enter valid Data\n";
}
void Showrooms::update_showr()
{
	int id;
	int count = -1;
	cout << "Enter the id of show room that u want to be updated" << endl;
	cin >> id;
	for (int i = 0; i < sh_vec.size(); i++)
	{
		if (id == sh_vec[i].showR_ID)
		{
			
			count = i;
			cout << "---------------------------------------------";
			cout << endl << " Showroom id   : " << sh_vec.at(i).showR_ID;
			cout << endl << " Showroom Name : " << sh_vec.at(i).name;
			cout << endl << " Showroom location : " << sh_vec.at(i).location;
			cout << endl << " Showroom phone_num : " << sh_vec.at(i).phone;
			if (sh_vec.at(0).cars.empty())
			{
				cout << "\n Showroom has No Cars in it. ";
			}
			else
			{
				cout << "\n---------------------------------------------\n";
				cout << " CARS IN SHOWROOM ";
				for (int j = 0; j < sh_vec.at(i).cars.size(); j++)
				{
					cout << "\n---------------------------------------------";
					cout << endl << " Car id   : " << sh_vec.at(i).cars.at(j).car_id;
					cout << endl << " The maker : " << sh_vec.at(i).cars.at(j).make;
					cout << endl << " The model : " << sh_vec.at(i).cars.at(j).model;
					cout << endl << " Year : " << sh_vec.at(i).cars.at(j).year;
					cout << endl << " The price : " << sh_vec.at(i).cars.at(j).price;
					cout << "\n---------------------------------------------\n";
				}

			}
			cout << "Enter the new data of showRoom" << endl;
			cout << "---------------------------------------------";
			cout << endl << "   Enter Showrooms id  : ";
			cin >> sh_vec.at(count).showR_ID;
			cout << endl << "   Enter Showrooms Name : ";
			cin >> sh_vec.at(count).name;
			cout << endl << "   Enter Showrooms location : ";
			cin >> sh_vec.at(count).location;
			cout << endl << "   Enter Showrooms phone_num : ";
			cin >> sh_vec.at(count).phone;
			cout << "-----------------------------------------------" << endl;
		}
		else if (count == -1)
		{
			cout << "enter valid id" << endl;
			update_showr();
		}
			

		}
	}
void Showrooms::delete_showr()
{
	int id;
	cout << "Enter showRoom  id : ";
	cin >> id;
	int count = -1;
	vector<Cars>::iterator it;
	for (int i = 0; i < sh_vec.size(); i++)
	{
		if (id == sh_vec[i].showR_ID)
			count = i;
	}
	if (count == -1)
		cout << "Enter Valid id" << endl;
	else
	{
		it = car_vec.begin() + count;
		car_vec.erase(it);
		cout << "--------------------------------------------------\n";
		cout << "Deleted successfully. \n";
	}
	
}
void Showrooms::delete_nowsh(int id)
{
	// delete one car exist in showroom
	vector<Cars>::iterator it;
	int count = -1, count2 = -1;
	for (int i = 0; i < sh_vec.size(); i++)
	{
		for (int j = 0; j < sh_vec.at(i).cars.size(); j++)
		{
			if (id == sh_vec.at(i).cars.at(j).car_id)
			{
				count = i;
				count2 = j;
			}
		}
	}
	it = sh_vec.at(count).cars.begin() + count2;
	sh_vec.at(count).cars.erase(it);

}
