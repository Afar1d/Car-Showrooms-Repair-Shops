#include "Admin.h"
static vector<Admin> admin_vec;

void Admin::Admin1(Admin a)
{
	a.username = "ahmed";
	a.pass = "11";
	a.adm_id = 25;
	admin_vec.push_back(a);

}

void Admin::set_data(Admin a)
{
	cout << "|-------------------------------------------|";
	cout << endl << "   UserName   : ";
	cin>> a.username;
	cout << endl << "   Seller Password : ";
	cin >> a.pass;
	cout << endl << "   Seller ID : ";
	cin >> a.adm_id;
	admin_vec.push_back(a);

}


bool Admin::Login(string user , string pass2)
{
	for (int i = 0; i < admin_vec.size(); i++)
	{
		if (user == admin_vec.at(i).username)
		{
			
			if (pass2 == admin_vec.at(i).pass)
				return true;
			else
				return false;

		}

	}
			
	return false;
}
