#pragma once
#include<iostream>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>
using namespace std;
class Admin
{
public:
	string username, pass;
	int adm_id;

public:
	void into_file();
	void Admin1(Admin a);
	void set_data(Admin a);
	bool Login(string user,string pass);
};

