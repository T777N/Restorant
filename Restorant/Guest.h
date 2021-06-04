#pragma once
#include<iostream>
#include "product.h"
//#include "start.h"
#include "stock.h"
#include"Admin.h"









using namespace std;
using namespace Product_namespace;
using namespace stock;
//using namespace start_namespace;
//using namespace son_yoxlama_namespace;
//using namespace test_namespace;
using namespace Admin_namespace;





namespace Guest_namespace {

    class Guest_class {
		int enter_product_id = 0;
				admin_class adm;
	public:
		Guest_class() {
			enter_product_id = NULL;
		}
		void admin_or_guest() {

			system("cls");
			//test2();
			Guest_class b;
			
			int second_start_choice=0;
			cout << " admin [ 1 ] " << endl;
			cout << " guest [ 2 ] " << endl;
			cout << endl << " enter : ";
			cin >> second_start_choice;

			if (second_start_choice == 1) {
				adm.log_in();
				
			}
			else if (second_start_choice == 2) {
				system("cls");
				b.print_all_products();


			}
			else
			{
				system("cls");
				cout << " wrong selection  |  enter again  " << endl;
				//start_method();
				admin_or_guest();
			}

		}
		void guest_enter_product_id() {
			cout << " Enter ID : ";
			cin >> enter_product_id;
		}

		void print_all_products() {
		
			for (size_t i = 0; i < products.size(); i++)
			{
				products[i].print();
			}
			cout << endl << " - - - - - - - - - - - - - - - - " << endl << endl;
			cout << endl;
			cout << " Back [ 0 ] " << endl;//////////////////////////////////////////////////
			guest_enter_product_id();
			if (enter_product_id == 0) {
				admin_or_guest();
				
			}
			else {

				get_id_product();

			}
		}
		
			string test_name="";
			double test_price=0;
			string test_name2="";
			double test_price2=0;
		void get_id_product() {
			////////////////////////////////////////
			for (size_t i = 0; i < products.size(); i++)
			{
				if (enter_product_id == products[i].getid()) {
					system("cls");
					test_name = products[i].getname();
					test_price = products[i].getprice();
					products[i].print();
					info_products[i].show_info();
					break;
				}
				else if (i == products.size() - 1) {

					cout << " Wrong Id / Enter again " << endl;
					guest_enter_product_id();
					get_id_product();

				}

			}
			cout << " Back [ 0 ] " << endl;
			cout << " BUY  [ 1 ]  " << endl;
			cout << " Add supplies [ 2 ] " << endl;
			cout << endl << " Enter : ";
			int buy_product;
			cin >> buy_product;
			if (buy_product == 0) {
				print_all_products();
			}
			else if (buy_product > 0) {

				chech_buy_product(buy_product);
			}
		}
		void chech_buy_product(const int field) {
			if (field == 0) {
				system("cls");
				print_all_products();
			}
			else if (field == 1) {

				int size_product;

				cout << " Enter size : ";
				cin >> size_product;
				adm.Orders_to_guest(test_name,size_product,test_price);
	 	  		system("cls");
				cout << "  Buy Succesfuld " << endl;
				cout << " Back [ 0 ] " << endl;
				cout << endl << " Enter : ";
				int yoxlama1;
				cin >> yoxlama1;
				if (yoxlama1 == 0) {
					get_id_product();
				}
				else {
					while (true) {
						cout << " Wrong " << endl;
						cout << endl << " Enter : ";
						int yoxlama1;
						cin >> yoxlama1;
						if (yoxlama1 == 0) {
							system("cls");
							print_all_products();
							break;
						}
					}
				}


			}
			else if (field == 2) {


				system("cls");
				for (size_t i = 0; i < elaveler.size(); i++)
				{
					elaveler[i].show();
					cout << endl << "---------------------------" << endl << endl;
				}
				int getStock_add_ID = 0;
				cout << endl << " Back [ 0 ] " << endl;
				cout << " Enter id : ";
				cin >> getStock_add_ID;
				if (getStock_add_ID == 0) {
					get_id_product();
				}
				else {
				
					for (size_t i = 0; i < elaveler.size(); i++)
					{
						if (elaveler[i].getId() == getStock_add_ID) {
							test_name2 = elaveler[i].getName();
							test_price2 = elaveler[i].getPrice();
							system("cls");
							elaveler[i].show();
							int getStock_add_size = 0;
							cout << endl << " Enter size : ";
							cin >> getStock_add_size;
							if (elaveler[i].buy_field(getStock_add_size)) {
								adm.Others_to_guest2(test_name2, getStock_add_size, test_price2);
								system("cls");
								cout << "     Successful     " << endl;
							}
							else {
								bool k = true;
								while (k) {

									system("cls");
									cout << "     Unsuccessful     " << endl;
									cout << endl << " Enter size : ";
									cin >> getStock_add_size;
									if (elaveler[i].buy_field(getStock_add_size)) {
										system("cls");
										cout << "     Successful     " << endl;
										k = false;
									}

								}
							}
							break;
						}
					}
					cout << endl << " Back [ 0 ] " << endl;
					cout << " Enter : ";
					int guest_product_size_back = 0;
					cin >> guest_product_size_back;
					if (guest_product_size_back == 0) {
						system("cls");
						chech_buy_product(2);
					}
					else if (guest_product_size_back > 0) {
						system("cls");
						cout << " Wrong " << endl << endl;
						cout << endl << " Back [ 0 ] " << endl;
						cout << " Enter : ";
					}

				}
			}
		}

	};


}








