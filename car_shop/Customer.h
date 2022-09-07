#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Customer
{
public:
	string username;
	string	pass, chioce;
	int cust_id = 0;

public:
	void set_data(Customer s);
	bool Login(string user, string pass);
	void customer1(Customer s);
};

