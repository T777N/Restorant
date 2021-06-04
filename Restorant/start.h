#pragma once

#include<iostream>
#include "product.h"
#include "guest.h"
#include "stock.h"
#include "admin.h"

//#include "admin.h"

using namespace std;
using namespace Guest_namespace;
using namespace Product_namespace;
using namespace stock;
using namespace Admin_namespace;

//using namespace admin_namespace;


namespace start_namespace {
	
	class start_class {
	public:
		
	int first_start_choice;


		Guest_class guest_class_in_start;
	    admin_class b;
    void start_method() {

		product_class first_product("kotlet", "etli yemek", 3, 10, 5);
		add_products_to_Vector(first_product);
		info_for_product first_product_info("et,sogan", "duz,istiot,yag", 275, 75);
		add_products_info_to_Vector(first_product_info);

		product_class second_product("borsh", "rus shorbasi", 2.50, 10, 5);
		add_products_to_Vector(second_product);
		info_for_product second_product_info("kelem,kok,cugundur", "duz,istiot,yag", 300, 500);
		add_products_info_to_Vector(second_product_info);

		product_class third_product("paytaxt salati", "soyuq salat", 6, 0, 5);
		add_products_to_Vector(third_product);
		info_for_product third_product_info("toyuq eti,mayonez,yumurta", "duz", 300, 150);
		add_products_info_to_Vector(third_product_info);

		product_class fourth_product("qovurma", "etli ve kartoflu yemek", 7, 0, 5);
		add_products_to_Vector(fourth_product);
		info_for_product fourth_product_info("et,sogan,kartof", "duz,istiot,yag", 500, 300);
		add_products_info_to_Vector(fourth_product_info);

		product_class fiveth_product("xengel", "xemir yemeyi", 4, 0, 5);
		add_products_to_Vector(fiveth_product);
		info_for_product fiveth_product_info("yarpaq xengel,et,qatiq", "duz,yag", 700, 300);
		add_products_info_to_Vector(fiveth_product_info);
		




		Stock_fields meat("et", 100, 0.7, 500,5);
		add_to_vector_stocks(meat);
		Stock_fields potatoes("kartof", 100, 0.4, 50,3);
		add_to_vector_stocks(potatoes);
		Stock_fields onion("sogan", 100, 0.3, 50,2);
		add_to_vector_stocks(onion);
		Stock_fields cabbage("kelem", 100, 0.5, 50,1);
		add_to_vector_stocks(cabbage);
		Stock_fields carrot("kok", 100, 0.1, 50,1);
		add_to_vector_stocks(carrot);
		Stock_fields beetroot("cugundur", 100, 0.1, 50,1);
		add_to_vector_stocks(beetroot);
		Stock_fields chicken_meat("toyuq_eti", 100, 0.1, 50,3);
		add_to_vector_stocks(chicken_meat);
		Stock_fields egg("yumurta", 100, 0.001, 50,2);
		add_to_vector_stocks(egg);
		Stock_fields yogurt("qatiq", 100, 0.1, 50,2);
		add_to_vector_stocks(yogurt);
		Stock_fields flour("un", 100, 0.01, 50,1);
		add_to_vector_stocks(flour);
		Stock_fields tomato("pomidor", 100, 0.1, 50,1);
		add_to_vector_stocks(tomato);
		Stock_fields cheese("pendir", 100, 0.1, 50,6);
		add_to_vector_stocks(cheese);
		Stock_fields cucumber("xiyar", 100, 0.01, 50,1);
		add_to_vector_stocks(cucumber);
		Stock_fields rice("duyu", 100, 0.01, 50,2);
		add_to_vector_stocks(rice);


		admin_or_guest();
	}
	
		void admin_or_guest() {

		cout << " admin [ 1 ] " << endl;
		cout << " guest [ 2 ] " << endl;
		cout << endl << " enter : ";
		cin >> first_start_choice;

		if (first_start_choice == 1) {
			b.log_in();
		}
		else if (first_start_choice == 2) {
			system("cls");
			guest_class_in_start.print_all_products();
			

		}
		else
		{
			system("cls");
			cout << " wrong selection  |  enter again  " << endl;
			
			admin_or_guest();
		}

	    }
	
	};
}

	






