#pragma once
#include<iostream>
#include<vector>

using namespace std;
static int static_id_stock = 0;
namespace stock {
    class Stock_fields {
		int id_stock;
		string name;
		int size;
		double Kq;
		double calory;
		double price;
	public:
		Stock_fields() {
			id_stock = NULL;
			name = "";
			size = NULL;
			Kq = NULL;
			calory = NULL;
			price = NULL;
		}
		Stock_fields(const string name, const int size, const double kq, const double calory,const double price) {
			setName(name);
			setSize(size);
			setKq(kq);
			setCalory(calory);
			setPrice(price);
			setId();
		}
		void add_new_Stock(const string name, const int size, const double kq, const double calory, const double price) {
			setName(name);
			setSize(size);
			setKq(kq);
			setCalory(calory);
			setPrice(price);
			setId();
		}
		int getId()const {
			return id_stock;
		}
		void setId() {
			++static_id_stock;
			id_stock = static_id_stock;
		}
		string getName()const {
			return name;
		}
		int getSize()const {
			return size;
		}
		double getKq()const {
			return Kq;
		}
		double getPrice()const {
			return price;
		}
		double getCalory()const {
			return calory;
		}
		void setName(const string name) {
			if (name != "") {
				this->name = name;
			}
		}
		void setSize(const int size) {
			if (size >= 0) {
				this->size = size;
			}
		}
		void setKq(const double kq) {
			if (kq > 0) {
				this->Kq = kq;
			}
		}
		void setPrice(const double price) {
			if (price > 0) {
				this->price = price;
			}
		}
		void setCalory(const double calory) {
			if (calory > 0) {
				this->calory = calory;
			}
		}

		bool buy_field(const int c) {
			if (size >= c) {

			this->size -= c;
			return true;
			}
			else {
				return false;
			}
		}

		void show() {
			cout << " Id : " << getId() << endl;
			cout << " Name : " << getName() << endl;
			cout << " Size : " << getSize() << endl;
			cout << " Kq : " << getKq() << endl;
			cout << " Calory : " << getCalory() << endl;
			cout << " Price : " << getPrice() <<" m"<< endl;
		}
	};



	


	vector<Stock_fields>elaveler;
	void add_to_vector_stocks(Stock_fields& newStock) {
		elaveler.push_back(newStock);
	}
	void delete_vector_in_stock(const int id) {
		elaveler.erase(elaveler.begin() + id - 1);
	}

	



}









