#include "Customer.h"
#include<vector>
static vector<Customer> a3;
void Customer::set_data(Customer s)
{
	
	cout << "|------------------------------------------|";
	cout << endl << "   Customer Name   : ";
	cin.ignore(); getline(cin, s.name);
	cout << endl << "   Customer E-mail : ";
	cin.ignore(); getline(cin, s.email);
	cout << endl << "   Customer ID     : ";
	cin >> s.id;
	a3.push_back(s);
	

}