#include "Customer.h"
static vector<Customer> cust_vec;
void Customer::customer1(Customer s)
{
	s.username = "ahmed";
	s.pass = "11";
	s.cust_id = 35;
	cust_vec.push_back(s);
}
void Customer::set_data(Customer s)
{

	cout << "|------------------------------------------|";
	cout << endl << "   Username   : ";
	cin>> s.username;
	cout << endl << "   Password   : ";
	cin>> s.pass;
	cout << endl << "   ID         : ";
	cin >> s.cust_id;
	cout<< " Enter your choice (buy, rent, repair) \n ";
	cin>> s.chioce;
	cust_vec.push_back(s);


}
bool Customer::Login(string user, string pass2)
{
	for (int i = 0; i < cust_vec.size(); i++)
	{
		if (user == cust_vec.at(i).username)
		{
			
			if (pass2 == cust_vec.at(i).pass)
				return true;
			else
				return false;

		}
	}
	return false;

}
