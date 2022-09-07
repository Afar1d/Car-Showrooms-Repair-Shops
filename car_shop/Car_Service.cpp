#include "Car_Service.h"
#include"Cars.h"
#include <iostream>
#include <vector>
Cars c2;
Showrooms sh2;
using namespace std;
static vector<Garages> vec_grages;
static vector <Service>vec_services;
static vector<Service_Process> vec_sp;
static vector<Buy_Rent> vec_br;
void Garages::set_Gararge(Garages garage)
{
	int n;
	cout << "--------------------------------" << endl;
	cout << "Enter the id of garage : " ;
	cin>>garage.Garage_id;
	cout << "Enter the name of garage : " ;
	cin >> garage.name;
	cout << "Enter the phone number : " ;
	cin >> garage.phone_no;
	cout << "Enter the location of garage : " ;
	cin >> garage.location;

	int c = -1;
	cout << "\n   Add service (1 for YES, 0 for NO) : ";
	cin >> c;
	while (c != 0)
	{
		int id;
		cout << "----------------------------------------------------------------" << endl;
		cout << "   Enter service id : ";
		cin >> id;
		int count = -1;
		for (int i = 0; i < vec_services.size(); i++)
		{
			if (id == vec_services.at(i).service_id)
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
			cout << "   service is successfully Added. \n";
			garage.services.push_back(vec_services.at(count));
		}
		cout << "----------------------------------------------------------------" << endl;
		cout << "press 1 to add another Service Or 0 to exit : ";
		cin >> c;

	}
	vec_grages.push_back(garage);
}
void Garages::update_Garage()
{
	int id;
	int count = -1;
	cout << "Enter the id of garage that uou want to be updates" << endl;
	cin >> id;
	for (int i = 0; i < vec_grages.size(); i++)
	{
		if (id == vec_grages[i].Garage_id)
		{
			count = i;
		}
	}
	if (count == -1)
	{
		cout << "Enter valid id" << endl;
		update_Garage();
	}
	else
	{
		cout << "***************************************************" << endl;
		cout << " ID : " << vec_grages.at(count).Garage_id << endl;
		cout << " Name : " << vec_grages.at(count).name << endl;
		cout << " Phone : " << vec_grages.at(count).phone_no << endl;
		cout << "Location : " << vec_grages.at(count).location << endl;
		cout << "*****************************************************" << endl;
		cout << "Enter new data" << endl;
		cout << "Enter id" << endl;
		cin >> vec_grages.at(count).Garage_id;
		cout << "Enter name" << endl;
		cin >> vec_grages.at(count).name;
		cout << "Enter phone" << endl;
		cin >> vec_grages.at(count).phone_no;
		cout << "Enter location" << endl;
		cin >> vec_grages.at(count).location;
		cout << "****************successfully updated********************" << endl;
	}
}
void Garages::delete_Garage()
{
	int id, count = -1;
	cout << "Enter the id of garage" << endl;
	cin >> id;
	vector<Garages>::iterator it;
	for (int i = 0; i < vec_grages.size(); i++)
	{
		if (id == vec_grages[i].Garage_id)
			count = i;
	}
	if (count == -1)
	{
		cout << "Enter valid id" << endl;
		delete_Garage();
	}
	else
	{
		it = vec_grages.begin() + count;
		vec_grages.erase(it);
		cout << "--------------------------------------------------\n";
		cout << "Deleted successfully. \n";
	}

}
void Garages::Display_Garage(int type)
{
	int id = 0 , count = -1;
	string name1;
	if (type)
	{
		cout << " Enter Garage Id : ";
		cin >> id;
	}
	else
	{
		cout << " Enter Garage Name : ";
		cin >> name1;
	}
	for (int i = 0; i < vec_grages.size(); i++)
	{
		if (id == vec_grages[i].Garage_id || name1==vec_grages.at(i).name)
		{
			count = i;
		}
	}
	if (count == -1)
	{
		cout << "Enter valid id" << endl;
		Display_Garage(type);
	}
	else
	{
		cout << " ID : " << vec_grages[count].Garage_id << endl;
		cout << " Name : " << vec_grages[count].name << endl;
		cout << " Phone : " << vec_grages[count].phone_no << endl;
		cout << " Location : " << vec_grages[count].location << endl;
		if (vec_grages.at(count).services.empty())
			cout << "NO services in this garage" << endl;
		else
		{
			cout << "Services in this garage : " << endl;
			for (int i = 0; i < vec_grages[count].services.size(); i++)
			{
				cout << " ID : " << vec_grages[count].services[i].service_id << endl;
				cout << " Name : " << vec_grages[count].services[i].name << endl;
				cout << " Price : " << vec_grages[count].services[i].price << endl;
				
			}
		}
	}
}
//====================================================//
void Service::set_Services(Service ser)
{
	cout << "---------------------------------" << endl;
	cout << "Enter Service id : " ;
	cin >> ser.service_id;
	cout << "Enter Service name : ";
	cin >> ser.name;
	cout << "Enter Service price : ";
	cin >> ser.price;
	vec_services.push_back(ser);
}
void Service::display_service(int type)
{

	int id = 0;
	string name1;
	if (type)
	{
		cout << " Enter Service Id : ";
		cin >> id;
	}
	else
	{
		cout << " Enter Service Name : ";
		cin >> name1;
	}
	for (int i = 0; i < vec_services.size(); i++)
	{
		if (id == vec_services.at(i).service_id || name1 == vec_services.at(i).name )
		{
			cout << "---------------------------------------------";
			cout << endl << " Service Id   : " << vec_services.at(i).service_id;
			cout << endl << " Service Name : " << vec_services.at(i).name;
			cout << endl << " Service Price : " << vec_services.at(i).price;
			cout << "\n---------------------------------------------\n";
			return;
		}

	}
	if (type)
		cout << " Enter valid id\n";
	else
		cout << " Enter valid Data\n";
}
void Service::update_service()
{
	int id;
	int count = -1;
	cout << "Enter the id of service that uou want to be updates" << endl;
	cin >> id;
	for (int i = 0; i < vec_services.size(); i++)
	{
		if (id == vec_services[i].service_id)
		{
			count = i;
		}
	}
	if (count == -1)
	{
		cout << "Enter valid id" << endl;
		update_service();
	}
	else
	{
	cout << "***************************************************" << endl;
	cout << " ID : " << vec_services.at(count).service_id << endl;
	cout << " Name : " << vec_services.at(count).name << endl;
	cout << " Price : " << vec_services.at(count).price << endl;
	cout << "*****************************************************" << endl;
	cout << "Enter new data" << endl;
	cout << "Enter id" << endl;
	cin >> vec_services.at(count).service_id;
	cout << "Enter name" << endl;
	cin >> vec_services.at(count).name;
	cout << "Enter price" << endl;
	cin >> vec_services.at(count).price;
	cout << "****************successfully updated********************" << endl;
	}
}
void Service::delete_service()
{
	int id, count = -1;
	cout << "Enter the id of service" << endl;
	cin >> id;
	vector<Service>::iterator it;
	for (int i = 0; i < vec_services.size(); i++)
	{
		if (id == vec_services[i].service_id)
			count = i;
	}
	if (count == -1)
	{
		cout << "Enter valid id" << endl;
		delete_service();
	}
	else
	{
		it = vec_services.begin() + count;
		vec_services.erase(it);
		cout << "--------------------------------------------------\n";
		cout << "Deleted successfully. \n";
	}



}
//====================================================//
void Service_Process::set_appointment(Service_Process sp)
{
	cout << "---------------------------------------------";
	cout << endl << "   Enter Process ID   : ";
	cin >> sp.process_id;
	cout << endl << "   Enter Customer ID : ";
	cin >> sp.cut_id;
	cout << endl << "   Enter The Date : ";
	cin >> sp.date;
	cout << endl << "   Enter Amount of money : ";
	cin >> sp.padget;
	cout << endl << "   Enter chosen Service : ";
	cin >> sp.service_name;
	vec_sp.push_back(sp);
}
//=====================================================//
void Buy_Rent::set_car(Buy_Rent br)
{
	cout << "---------------------------------------------";
	cout << endl << "   Enter Process ID   : ";
	cin >> br.process_id;
	cout << endl << "   Enter Customer ID : ";
	cin >> br.cut_id;
	cout << endl << "   Enter The Date : ";
	cin >> br.date;
	cout << endl << "   Enter Amount of money : ";
	cin >> br.padget;
	cout << endl << "   Enter the id chosen car : ";
	cin >> br.Car_id;
	vec_br.push_back(br);
	//to remove the fucking cars
	c2.delete_now(br.Car_id);
	sh2.delete_nowsh(br.Car_id);

}