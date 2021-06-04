#pragma once

#include<iostream>

#include "Stock.h"
#include "Product.h"



using namespace std;
using namespace stock;
using namespace Product_namespace;




namespace Admin_namespace {

	string admin_username = "admin";
	string admin_password = "admin";
	string test_username;
	string test_passsword;



	class admin_class {
          // Guest_class guest_class_1; 
	public:
		void print_all_Products_admin() {
			system("cls");
			int test_for_print_all_products;
			for (size_t i = 0; i < products.size(); i++)
			{
				products[i].print();
			}
			cout << endl << " - - - - - - - - - - - - - - - - " << endl << endl;
			cout << endl;
			cout << " Back [ 0 ] " << endl;
			cout << endl << " Enter : ";
			cin >> test_for_print_all_products;
			if (test_for_print_all_products == 0) {
				admin_start();
			}
			else {
				system("cls");
				print_all_Products_admin();
				cout << endl << " Wrong | Enter again " << endl;
			}
		}
		void print_all_Products_admin_easy() {
			system("cls");
			int test_for_print_all_products;
			for (size_t i = 0; i < products.size(); i++)
			{
				products[i].print();
			}
			cout << endl << " - - - - - - - - - - - - - - - - " << endl << endl;
		}
		void add_new_product() {
			system("cls");
			product_class new_product;
			cout << " Enter new Product name : ";
			string new_product_name;
			cin >> new_product_name;
			cout << " Enter new Product description : ";
			string new_product_description;
			cin >> new_product_description;
			cout << " Enter new Product Price : ";
			double new_product_price;
			cin >> new_product_price;
			cout << " Enter new Product Discount : ";
			double new_product_discount;
			cin >> new_product_discount;
			cout << " Enter new Product Tax : ";
			double new_product_tax;
			cin >> new_product_tax;
			new_product.add_product_inproduct(new_product_name, new_product_description, new_product_price, new_product_discount, new_product_tax);
			add_products_to_Vector(new_product);
			system("cls");
			cout << endl << " Added Successful  " << endl << endl;
			cout << " Back [ 0 ] "<<endl;
			cout << " Enter : ";
			int back_in_add_new_product;
			cin >> back_in_add_new_product;
			if (back_in_add_new_product == 0) {
				system("cls");
				admin_start();
			}
			else {
				bool test_in_new_product=true;
				while (test_in_new_product) {

				cout << " Back [ 0 ] " << endl;
				cout << " Enter : ";
				int back_in_add_new_product2;
				cin >> back_in_add_new_product2;
				if (back_in_add_new_product2 == 0) {
					system("cls");
					test_in_new_product = false;
					admin_start();
				}
				}
			}

		}
		void uptade_Product() {
			system("cls");
			print_all_Products_admin_easy();
			cout <<endl<< " Enter uptade product ID : ";
			int test_in_uptade_product_id;
			cin >> test_in_uptade_product_id;
			for (size_t i = 0; i < products.size(); i++)
			{
				if (test_in_uptade_product_id == products[i].getid()) {
					cout << endl << " Enter new Name : ";
					string new_uptade_Product_name;
					cin >> new_uptade_Product_name;
					products[i].setname(new_uptade_Product_name);
					cout << endl << " Enter new Description : ";
					string new_uptade_Product_description;
					cin >> new_uptade_Product_description;
					products[i].setdescription(new_uptade_Product_description);
					cout << endl << " Enter new Price : ";
					int new_uptade_Product_price;
					cin >> new_uptade_Product_price;
					products[i].setprice(new_uptade_Product_price);
					cout << endl << " Enter new Discount : ";
					int new_uptade_Product_discount;
					cin >> new_uptade_Product_discount;
					products[i].setdiscount(new_uptade_Product_discount);
					cout << endl << " Enter new Tax : ";
					int new_uptade_Product_tax;
					cin >> new_uptade_Product_tax;
					products[i].settax(new_uptade_Product_tax);


				}
			}
			system("cls");
			cout << endl << " Uptade Successful  " << endl << endl;
			cout << " Back [ 0 ] " << endl;
			cout << " Enter : ";
			int back_in_add_new_product_uptade;
			cin >> back_in_add_new_product_uptade;
			if (back_in_add_new_product_uptade == 0) {
				system("cls");
				admin_start();
			}
			else {
				bool test_in_new_product_uptade = true;
				while (test_in_new_product_uptade) {

					cout << " Back [ 0 ] " << endl;
					cout << " Enter : ";
					int back_in_add_new_product_uptade2;
					cin >> back_in_add_new_product_uptade2;
					if (back_in_add_new_product_uptade2 == 0) {
						system("cls");
						test_in_new_product_uptade = false;
						admin_start();
					}
				}
			}
		}
		void delete_product_in_admin() {
			system("cls");
			print_all_Products_admin_easy();
			cout << endl << " Enter Delete product ID : ";
			int test_in_delete_product_id;
			cin >> test_in_delete_product_id;
			delete_vector(test_in_delete_product_id);
			system("cls");
			cout << endl << " Delete Successful  " << endl << endl;
			cout << " Back [ 0 ] " << endl;
			cout << " Enter : ";
			int back_in_add_new_product_delete;
			cin >> back_in_add_new_product_delete;
			if (back_in_add_new_product_delete == 0) {
				system("cls");
				admin_start();
			}
			else {
				bool test_in_new_product_delete = true;
				while (test_in_new_product_delete) {

					cout << " Back [ 0 ] " << endl;
					cout << " Enter : ";
					int back_in_add_new_product_delete2;
					cin >> back_in_add_new_product_delete2;
					if (back_in_add_new_product_delete2 == 0) {
						system("cls");
						test_in_new_product_delete = false;
						admin_start();
					}
				}
			}
		}
		void add_new_Stock_in_admin() {
			system("cls");
			Stock_fields new_stock_class;
			cout << " Enter new Stock name : ";
			string new_stock_name;
			cin >> new_stock_name;
			cout << " Enter new Stock Size : ";
			double new_stock_size;
			cin >> new_stock_size;
			cout << " Enter new Stock Kq : ";
			double new_stock_kq;
			cin >> new_stock_kq;
			cout << " Enter new Stock Calory : ";
			double new_stock_calory;
			cin >> new_stock_calory;
			cout << " Enter new Stock Price : ";
			double new_stock_price;
			cin >> new_stock_price;
			new_stock_class.add_new_Stock(new_stock_name, new_stock_size, new_stock_kq, new_stock_calory, new_stock_price);
			elaveler.push_back(new_stock_class);
			system("cls");
			cout << endl << " Added Successful  " << endl << endl;
			cout << " Back [ 0 ] " << endl;
			cout << " Enter : ";
			int back_in_add_new_product;
			cin >> back_in_add_new_product;
			if (back_in_add_new_product == 0) {
				system("cls");
				admin_start();
			}
			else {
				bool test_in_new_product = true;
				while (test_in_new_product) {

					cout << " Back [ 0 ] " << endl;
					cout << " Enter : ";
					int back_in_add_new_product2;
					cin >> back_in_add_new_product2;
					if (back_in_add_new_product2 == 0) {
						system("cls");
						test_in_new_product = false;
						admin_start();
					}
				}
			}
		}
		void print_all_Stocks_Admin() {
			system("cls");
			for (size_t i = 0; i < elaveler.size(); i++)
			{
				elaveler[i].show();
				cout << endl << "---------------------------------" << endl << endl;
			}
			cout << " Back [ 0 ] " << endl;
			cout << " Enter : ";
			int back_in_add_new_product;
			cin >> back_in_add_new_product;
			if (back_in_add_new_product == 0) {
				system("cls");
				admin_start();
			}
			else {
				bool test_in_new_product = true;
				while (test_in_new_product) {

					cout << " Back [ 0 ] " << endl;
					cout << " Enter : ";
					int back_in_add_new_product2;
					cin >> back_in_add_new_product2;
					if (back_in_add_new_product2 == 0) {
						system("cls");
						test_in_new_product = false;
						admin_start();
					}
				}
			}
		}
		void print_all_stocks_easy() {
			system("cls");
			for (size_t i = 0; i < elaveler.size(); i++)
			{
				elaveler[i].show();
				cout << endl << "---------------------------------" << endl << endl;
			}
		}
		void uptade_Stock_in_admin() {
			print_all_stocks_easy();
			cout << endl << " Enter uptade Stock ID : ";
			int test_in_uptade_product_id;
			cin >> test_in_uptade_product_id;
			for (size_t i = 0; i <elaveler.size(); i++)
			{
				if (test_in_uptade_product_id == elaveler[i].getId()) {
					cout << endl << " Enter new Name : ";
					string new_uptade_Stock_name;
					cin >> new_uptade_Stock_name;
					elaveler[i].setName(new_uptade_Stock_name);
					cout << endl << " Enter new Size : ";
					int new_uptade_Stock_size;
					cin >> new_uptade_Stock_size;
					elaveler[i].setSize(new_uptade_Stock_size);
					cout << endl << " Enter new Kq : ";
					int new_uptade_Stock_kq;
					cin >> new_uptade_Stock_kq;
					elaveler[i].setKq(new_uptade_Stock_kq);
					cout << endl << " Enter new Calory : ";
					int new_uptade_Stock_calory;
					cin >> new_uptade_Stock_calory;
					elaveler[i].setCalory(new_uptade_Stock_calory);
					cout << endl << " Enter new Price : ";
					int new_uptade_stock_price;
					cin >> new_uptade_stock_price;
					elaveler[i].setPrice(new_uptade_stock_price);


				}
			}
			system("cls");
			cout << endl << " Uptade Successful  " << endl << endl;
			cout << " Back [ 0 ] " << endl;
			cout << " Enter : ";
			int back_in_add_new_product_uptade;
			cin >> back_in_add_new_product_uptade;
			if (back_in_add_new_product_uptade == 0) {
				system("cls");
				admin_start();
			}
			else {
				bool test_in_new_product_uptade = true;
				while (test_in_new_product_uptade) {

					cout << " Back [ 0 ] " << endl;
					cout << " Enter : ";
					int back_in_add_new_product_uptade2;
					cin >> back_in_add_new_product_uptade2;
					if (back_in_add_new_product_uptade2 == 0) {
						system("cls");
						test_in_new_product_uptade = false;
						admin_start();
					}
				}
			}
		}
		void delete_stocks_in_admin() {
			system("cls");
			print_all_stocks_easy();
			cout << endl << " Enter Delete Stock ID : ";
			int test_in_delete_stock_id;
			cin >> test_in_delete_stock_id;
			delete_vector_in_stock(test_in_delete_stock_id);
			system("cls");
			cout << endl << " Delete Successful  " << endl << endl;
			cout << " Back [ 0 ] " << endl;
			cout << " Enter : ";
			int back_in_add_new_product_delete;
			cin >> back_in_add_new_product_delete;
			if (back_in_add_new_product_delete == 0) {
				system("cls");
				admin_start();
			}
			else {
				bool test_in_new_product_delete = true;
				while (test_in_new_product_delete) {

					cout << " Back [ 0 ] " << endl;
					cout << " Enter : ";
					int back_in_add_new_product_delete2;
					cin >> back_in_add_new_product_delete2;
					if (back_in_add_new_product_delete2 == 0) {
						system("cls");
						test_in_new_product_delete = false;
						admin_start();
					}
				}
			}
		}
		void log_in() {
			system("cls");
			cout << " enter username : ";
			cin >> test_username;
			cout << " enter password : ";
			cin >> test_passsword;
			cout << endl << endl << " back [ 0 ]   |     next [ 1 ]    " << endl;
			cout << " enter : ";
			int test_admin_first;
			cin >> test_admin_first;
			if (test_admin_first == 1) {

				if (test_username == admin_username && test_passsword == admin_password) {
					admin_start();
				}
				else {
					log_in();
				}
			}
			else if (test_admin_first == 0) {

				system("cls");
				//guest_class guestclass_inadmin;
				int second_start_choice = 0;
				cout << " admin [ 1 ] " << endl;
				cout << " guest [ 2 ] " << endl;
				cout << endl << " enter : ";
				cin >> second_start_choice;

					class Guest_class {
						int enter_product_id = 0;
					public:
						Guest_class() {
							enter_product_id = NULL;
						}
						void admin_or_guest() {

					        Guest_class b;////////////////////////////////////////////////
							system("cls");
							//test2();
						

							int second_start_choice = 0;
							cout << " admin [ 1 ] " << endl;
							cout << " guest [ 2 ] " << endl;
							cout << endl << " enter : ";
							cin >> second_start_choice;

							if (second_start_choice == 1) {
								admin_class adm;
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
						void get_id_product() {
							////////////////////////////////////////
							for (size_t i = 0; i < products.size(); i++)
							{
								if (enter_product_id == products[i].getid()) {
									system("cls");
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
									print_all_products();
								}
								else {

									for (size_t i = 0; i < elaveler.size(); i++)
									{
										if (elaveler[i].getId() == getStock_add_ID) {
											system("cls");
											elaveler[i].show();
											int getStock_add_size = 0;
											cout << endl << " Enter size : ";
											cin >> getStock_add_size;
											if (elaveler[i].buy_field(getStock_add_size)) {
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
					        Guest_class a;////////////////////////////////////////////////
				if (second_start_choice == 1) {
					log_in();
				}
				else if (second_start_choice == 2) {
					system("cls");
					

					a.print_all_products();

				}
				else
				{
					bool test_in_Admin_admin_or_guest = true;
					while (test_in_Admin_admin_or_guest) {

					system("cls");
					cout << " wrong selection  |  enter again  " << endl;
					int second_start_choice2 = 0;
					cout << " admin [ 1 ] " << endl;
					cout << " guest [ 2 ] " << endl;
					cout << endl << " enter : ";
					cin >> second_start_choice2;
					//a.print_all_products();
					if (second_start_choice2 == 1) {
						test_in_Admin_admin_or_guest = false;
						log_in();

					}
					else if (second_start_choice2 == 2) {
						system("cls");
						test_in_Admin_admin_or_guest = false;


						a.print_all_products();

					}				
					}
				}

			}
			else {
			log_in();
            }
		}
		string product_name_in_print_1="";
		int product_size_in_print_1=0;
		double product_price_in_print_1=0;
		
		void Orders_to_guest(string productName,int productSize,double Productprice) {
			product_name_in_print_1 = productName;
			product_size_in_print_1 = productSize;
			product_price_in_print_1 = Productprice;
		}
	
		string product_name_in_print_2="";
		int product_size_in_print_2=0;
		double product_price_in_print_2=0;

		void Others_to_guest2(string name, int size,double price) {
			product_name_in_print_2 = name;
			product_size_in_print_2 = size;
			product_price_in_print_2 = price;
			
		}

		void Others_to_guest_show() {
			cout <<" Sifaris : "<< product_size_in_print_1 << " eded " << product_name_in_print_1 << endl;
			cout << " Elaveler : " << product_size_in_print_2 << " eded " << product_name_in_print_2 << endl;
			cout << " Qiymet : " << (product_size_in_print_1 * product_price_in_print_1) + (product_size_in_print_2 * product_price_in_print_2) << " M " << endl;

			cout << " Back [ 0 ] " << endl;
			cout << endl << " Enter : ";
			int yoxlama1;
			cin >> yoxlama1;
			if (yoxlama1 == 0) {
				system("cls");
				admin_start();
			}
			else {
				system("cls");
				while (true) {
					cout << " Wrong " << endl;
					cout << endl << " Enter : ";
					int yoxlama1;
					cin >> yoxlama1;
					if (yoxlama1 == 0) {
						system("cls");
						admin_start();
						break;
					}
				}
			}

		}

		void admin_start() {
			system("cls");
			int test_admin_second_login = 0;
			cout << " back [ 0 ] " << endl;
			cout << " show all prducts [ 1 ] " << endl;
			cout << " add new product [ 2 ] " << endl;
			cout << " update product [ 3 ] " << endl;
			cout << " delete product [ 4 ] " << endl;
			cout << " add new stock [ 5 ] " << endl;
			cout << " uptade stock [ 6 ] " << endl;
			cout << " delete stock [ 7 ] " << endl;
			cout << " Show Orders [ 8 ] " << endl;
			cout << " Show All Stocks [ 9 ] " << endl;
			cout << endl;
			cout << " enter : ";
			cin >> test_admin_second_login;
			if (test_admin_second_login == 0) {
				system("cls");
				//guest_class  guestclass_in_admin2;
				int second_start_choice = 0;
				cout << " admin [ 1 ] " << endl;
				cout << " guest [ 2 ] " << endl;
				cout << endl << " enter : ";
				cin >> second_start_choice;

				if (second_start_choice == 1) {
					log_in();
				}
				else if (second_start_choice == 2) {
					system("cls");
					
					//guest_class_1.print_all_products();


				}
				else
				{
					system("cls");
					cout << " wrong selection  |  enter again  " << endl;

				
				//	guest_class_1.admin_or_guest();
					
				}
			}
			else if (test_admin_second_login == 1) {
				print_all_Products_admin();
			}
			else if (test_admin_second_login == 2) {
				add_new_product();
			}
			else if (test_admin_second_login == 3) {
				uptade_Product();
			}
			else if (test_admin_second_login == 4) {
				delete_product_in_admin();
			}
			else if (test_admin_second_login == 5) {
				add_new_Stock_in_admin();
			}
			else if (test_admin_second_login == 6) {
				uptade_Stock_in_admin();
			}
			else if (test_admin_second_login == 7) {
				delete_stocks_in_admin();
			}
			else if (test_admin_second_login == 8) {
				Others_to_guest_show();
			}
			else if (test_admin_second_login == 9) {
				print_all_Stocks_Admin();
			}
			else {
				admin_start();
			}
		}

	};
}



