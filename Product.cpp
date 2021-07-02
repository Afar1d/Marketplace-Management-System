
#include<vector>
#include"Seller.h"
#include<algorithm>
#include"Customer.h"

vector<category> a4;
vector<Cart> a5;
vector<Cart> a6;
int f=0,h=0;
string flag;
string temp;

void category ::Add_product(category c, Product p,int seller_id)
{
	
	cout << endl << "   Product Name  : ";
	cin >> p.name_product;
	cout << endl << "   Price : ";
	cin >> p.price;
	
	cout << endl << "   Product Id : ";
	cin >> p.id;
	cout << endl << "   Category Name : ";

	cin >> flag;
	p.seller_id = seller_id;
	for (int i = 0; i < a4.size(); i++)
	{
		if (flag == a4.at(i).category_name )
		{
			f++;
			h = i;
			break;
		}
	}
	if (f == 1)
	{
		a4[h].a.push_back(p);
	}
	else if (f==0)
	{
	
		c.category_name = flag;
		c.a.push_back(p);
		a4.push_back(c);
		
	}

	f = 0;
}


void category::show_category()
{
	for (int i = 0; i < a4.size(); i++)
	{
		cout << "   "<< (i + 1) << " - ";
		cout<< a4.at(i).category_name << endl;
	}
}

void category::show_products(int x)
{	
	for (int i = 0; i < a4[x].a.size(); i++)
	{
		cout << (i + 1) << " - ";
		cout << a4[x].a.at(i).name_product;
		cout << "        price : " << a4[x].a.at(i).price;
		cout << "        Seller_Id : " << a4[x].a.at(i).seller_id;
		cout << "       Product_Id : " << a4[x].a.at(i).id;
		cout << endl;
	}
}
void category::show_products_sorted(int x)
{
	for (int i = 0; i < a4[x].a.size(); i++)
	{
		for (int j = i + 1; j < a4[x].a.size(); j++)
		{
			if (a4.at(x).a.at(i).name_product[0] > a4[x].a.at(j).name_product[0])
			{
				temp = a4[x].a.at(i).name_product;
				a4[x].a.at(i).name_product = a4[x].a.at(j).name_product;
				a4[x].a.at(j).name_product = temp;
			}

		}
	}
	for (int i = 0; i < a4.at(x).a.size(); i++)
	{
		cout << (i + 1) << " - ";
		cout << a4.at(x).a.at(i).name_product;
		cout << "        price : " << a4.at(x).a.at(i).price;
		cout << "        Seller_Id : " << a4.at(x).a.at(i).seller_id;
		cout << endl;
	}
}

void Cart::add(Cart ca, int t, int i)
{
	ca.name_pr = a4[t].a.at(i).name_product;
	ca.price_pr = a4[t].a.at(i).price;
	ca.p_id = a4[t].a.at(i).id;
	ca.shipment_price = 30;
	a5.push_back(ca);
}

void Cart::Recipt(Cart ca )
{
	for (int i = 0; i < a5.size(); i++)
	{
		cout << (i + 1) << " - ";
		cout << "        Product Name : " <<a5.at(i).name_pr;
		cout << "        price : " << a5.at(i).price_pr;
		cout << "        Product_Id : " << a5.at(i).p_id;
		cout << "        Shaipmint_price : " << a5.at(i).shipment_price;
		cout << endl;
	}
	
}

void Cart::total_price()
{
	int sum = 0;
	for (int i = 0; i < a5.size(); i++)
	{
		sum = sum + a5.at(i).price_pr + a5.at(i).shipment_price;
	}
	cout << sum;
	a5.clear();
}


