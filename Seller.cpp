#include<vector>
#include"Seller.h"


vector<Seller> a2;
void Seller::set_data(Seller s)
{
	
	cout << "|-------------------------------------------|";
	cout << endl << "   Seller Name   : ";
	cin.ignore(); getline(cin, s.name);
	cout << endl << "   Seller E-mail : ";
	cin.ignore(); getline(cin, s.email);
	
	a2.push_back(s);
	
}

