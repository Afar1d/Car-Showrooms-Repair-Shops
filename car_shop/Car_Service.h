#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Customer.h"
#include"Admin.h"
#include "Car_Service.h"
using namespace std;
class Buy_Rent
{
public:
	int process_id, cut_id, padget, Car_id;
	string date;
public:
	void set_car(Buy_Rent br);
};
//================================================//
class Service
{
public:
	int service_id;
	string name, price;
public:
	void set_Services(Service ser);
	void update_service();
	void delete_service();
	void display_service(int type);
};
//=================================================//
class Garages
{
public:
	int Garage_id;
	string name, phone_no, location;
	vector<Service>services;
public:
	void set_Gararge(Garages grage);
	void update_Garage();
	void delete_Garage();
	void Display_Garage(int type);

};
//============================================//
class Service_Process
{
public:
	int process_id, cut_id, padget;
	string service_name, date;

public:
	void set_appointment(Service_Process sp);
};