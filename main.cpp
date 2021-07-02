
#include<iostream>
#include "Seller.h"
#include"Customer.h"

using namespace std;
int continue1 = -1;
Seller s1;
Customer c1;
Product p1;
category c2;
Cart c3;
int main()
{
	cout << "-------------------------------------------\n";
	cout << "------ Marketplace Management System ------\n";
	cout << "-------------------------------------------\n";
	while (continue1 != 0)
	{


		cout << "     (1) Sell    (2) Buy    (3)Exit \n ";
		cout << "------------------------------------------";
		cout << endl << "	  Enter Your Select : ";
		int num_of_product;
		int select = 0;
		int select2 = 0;

		cin >> select;
		cout << "-------------------------------------------" << endl;
		if (select == 1)
		{
			cout << "  Enter Number Of Product You Will Sell : ";
			cin >> num_of_product;
			s1.set_data(s1);
			cout << endl << "   Seller ID : ";
			cin >> p1.seller_id;
			cout << "|-------------------------------------------|";

			for (int i = 0; i < num_of_product; i++)
			{
				c2.Add_product(c2, p1, p1.seller_id);
				cout << "-------------------------------------------" << endl;

			}
		}

		else if (select == 2)
		{
			c1.set_data(c1);
			cout << "|-------------------------------------------|" << endl;
			cout << " ---------------- Categories ---------------\n";
			c2.show_category();
			cout << "|-------------------------------------------|" << endl;
			cout << "         Select Specific Category : ";
			cin >> select2;
			cout << "-------------------------------------------" << endl;
			cout << " ---------------- Products ----------------\n";
			c2.show_products((select2 - 1));
			cout << "-------------------------------------------------------" << endl;
			int choice = 1;
			while (choice == 1)
			{
				cout << "(1) To Sort The Products Alphapitically  (2)To Add Products To Cart :"; cin >> choice;
				cout << "-------------------------------------------------------" << endl;
				if (choice == 1)
				{
					c2.show_products_sorted(select2 - 1);

				}

				else if (choice == 2)
				{
					int c = 1;
					int i = 0;
					while (c == 1)
					{
						cout << "Enter Product Number To Add To Cart : ";
						cin >> i;
						c3.add(c3, (select2 - 1), (i - 1));
						cout << "-------------------------------------------------------" << endl;
						cout << "Press (1) To Add More   (0) to Confirm The Buying : ";
						cin >> c;
						if (c == 1)
						{
							cout << " ---------------- Categories ---------------\n";
							c2.show_category();
							cout << "Select Specific Category : ";
							cin >> select2;
							cout << " ---------------- Products ----------------\n";
							c2.show_products_sorted(select2 - 1);
						}
						else if (c == 0)
						{
							cout << "-------------------------------------------------------" << endl;
							cout << " ---------------- Recipt ----------------\n";
							c3.Recipt(c3);
							cout << "Total price = ";
							c3.total_price();
							cout << "\n-------------------------------------------\n";
						}
						else
							cout << " Select Number From Menu \n ";
					}
				}
				else
					cout << " Select Number From Menu \n ";
			}
		}

		else if (select == 3)
			exit(0);
		else
			cout << " Select Number From Menu \n ";

		main();
	}
	system("pause");
	return 0;

}