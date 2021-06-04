#pragma once
#include<iostream>
#include<string.h>
#include<vector>
#include<fstream>



using namespace std;


namespace Product_namespace {
	
	static int count=0;
	static int id = 0;
	
	class product_class {
	private:
		string name;
		string description;
		double price;
		double discount;
		double tax;
		int product_id=0;
	public:
		product_class() {
			name = "";
			description = "";
			price = NULL;
			discount = NULL;
			tax = NULL;
			product_id =NULL;
		}
		product_class(const string name, const string description, const double price, const double discount, const double tax) {
			setname(name);
			setdescription(description);
			setprice(price);
			setdiscount(discount);
			settax(tax);
			setId();
			++count;
			read_file_Products("products.txt",getname(),getdescription(),getprice(),getdiscount(),gettax());
			
		}
		void read_file_Products(string fileName,  string name,  string description,  double price,  double discount,  double tax) {
			ofstream fout(fileName, ios::app);
			if (fout.is_open()) {
				fout << name << " ";
				fout << description << " ";
				fout << price << " ";
				fout << discount << " ";
				fout << tax << " "<<endl;
				
			}
			else {
				cout << fileName << " does not existes " << endl;
			}
			fout.close();
		}
		void add_product_inproduct(const string name, const string description, const double price, const double discount, const double tax) {
			setname(name);
			setdescription(description);
			setprice(price);
			setdiscount(discount);
			settax(tax);
			setId();
			++count;

			read_file_Products("all_products.txt",getname(),getdescription(),getprice(),getdiscount(),gettax());
		}
		int getid()const {
			return product_id;
		}
		static int getcount(){
			return count;
		}
		string getname()const {
			return name;
		}
		string getdescription()const {
			return description;
		}
		double getprice()const {
			return price;
		}
		double getdiscount()const {
			return discount;
		}
		double gettax()const {
			return tax;
		}
		void setId() {
			id += 1;
			this->product_id = id;
		}
		void setname(const string name) {
			if (name != "") {
				this->name = name;
			}
		}
		void setdescription(const string description) {
			if (description != "") {
				this->description = description;
			}
		}
		void setprice(const double price) {
			if (price > 0) {
				this->price = price;
			}
		}
		void setdiscount(const double discount) {
			if (discount >= 0) {
				this->discount = discount;
			}
		}
		void settax(const double tax) {
			if (tax >= 0) {
				this->tax = tax;
			}
		}

		void print() {
			cout << endl << " - - - - - - - - - - - - - - - - " << endl << endl;
			cout << " product id : " << getid() << endl;
			cout << " product name : " << getname() << endl;
			cout << " product description : " << getdescription()<< endl;
			cout << " product price : " << getprice() <<" m "<< endl;
			cout << " product discount : " << getdiscount() <<" % "<< endl;
			cout << " product tax : " << gettax() << " % " << endl;
		}
	};


	vector<product_class>products;

	void add_products_to_Vector(product_class& newProduct) {
		products.push_back(newProduct);
	}
	void delete_vector(const int id) {
		products.erase(products.begin()+id-1);
	}

	//void writeDataToBinaryFile() {
// ofstream fout("arr.bin", ios_base::binary | ios_base::app);
// int arr[5] = { 1,2,3,4,5 };
//
// if (fout.is_open()) {
// fout.write((char*)arr, sizeof(int) * 5);
// }
// fout.close();
//}

	class info_for_product {
		int info_id;
		string supplies;//erzadlar
		string spices;//edviyyatlar
		double calory;
		int qr;
	public:
		info_for_product(){
			supplies = "";
			spices = "";
			calory = NULL;
			qr = NULL;
		}
		info_for_product(const string supplies, const string spices, const int calory, const int qr) {
			setSupplies(supplies);
			setSpices(spices);
			setCalory(calory);
			setQr(qr);
			setId();
		}
		int getId()const {
			return info_id;
		}
		string getSupplies()const {
			return supplies;
		}
		string getSpices()const {
			return spices;
		}
		double getCalory()const {
			return calory;
		}
		int getQr()const {
			return qr;
		}
		void setId() {
			
			this->info_id = id;
		}
		void setSupplies(const string sup) {
			if (sup != "") {
				this->supplies = sup;
			}
		}
		void setSpices(const string spi) {
			if (spi != "") {
				this->spices = spi;
			}
		}
		void setCalory(const double cal) {
			if (cal > 0) {
				this->calory = cal;
			}
		}
		void setQr(const int qr) {
			if (qr > 0) {
				this->qr = qr;
			}
		}

		void show_info() {
			cout <<endl<< " About " << endl<<endl;
			cout << " Supplies : " << getSupplies() << endl;
			cout << " Spices : " << getSpices() << endl;
			cout << " Calory : " << getCalory() << endl;
			cout << " Qr : " << getQr() << endl;
		}

	};

		vector<info_for_product>info_products;

		void add_products_info_to_Vector(info_for_product& newProduct_info) {
			info_products.push_back(newProduct_info);
		}



	
    
	
	
}
