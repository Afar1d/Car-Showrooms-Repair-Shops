#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Customer.h"
#include"Admin.h"
#define ll long long
class Cars
{
public:
	ll car_id = 0, year = 0, price = 0;
	string make, model;
public:
	void set_cars(Cars car);
	void show_cars(int type);
	void update();
	void delete_car();
	void delete_now(int id);
};
//////////////////////////////////////////
class Showrooms
{
public:
	int showR_ID = 0, phone = 0;
	string name, location;
	vector<Cars> cars;

public:
	void showr_data(Showrooms sh);
	void display_showr(int type);
	void update_showr();
	void delete_showr();
	void delete_nowsh(int id);
};



