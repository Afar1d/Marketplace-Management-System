#include<iostream>
#include<string>
#include<vector>
#include"Seller.h"

using namespace std;

class Product
{
public:
	 int id =0;
	int price = 0;
	int seller_id = 0;
	string name_product;

};

class category
{
public:
	string category_name;
	vector<Product> a;
	
	
public:
	void Add_product( category c,Product p,int seller_id);
	void show_category();
	void show_products(int);
	void show_products_sorted(int );
};

class Cart
{
public:
	string name_pr;
	int price_pr =0 ;
	int p_id = 0;
	int shipment_price = 30;
public:
	void add(Cart, int, int);
	void total_price();
	void Recipt(Cart ca);
};