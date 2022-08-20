#pragma once
#include<iostream>
#include<fstream>
#include<string.h>
#include<list>
using namespace std;
class Order {
	char productName[150] = "Nike SHoes 3162";
	char buyerName[100] = "Samir Khanal";
	char mobileNumber[15] = "9800500356";
	float price = 30.00;
	float totalprice = 30.00;
	int quantity = 1;
public:
	void setOrder(char productName1[150], char buyerName1[100], char mobileNumber1[15], float price1, int quantity1) {
		strcpy(productName, productName1);
		strcpy(buyerName, buyerName1);
		strcpy(mobileNumber, mobileNumber1);
		price = price1;
		quantity = quantity1;
		totalprice = price * quantity;
	}
	char* getProductName() {
		return productName;
	}
	char* getBuyerName() {
		return buyerName;
	}
	char* getmobileNumber() {
		return mobileNumber;
	}
	float getPrice() {
		return price;
	}
	float getTotalPrice() {
		return totalprice;
	}
	int getQuantity() {
		return quantity;
	}
	bool write() {
		Order temp;
		temp.setOrder(this->productName, this->buyerName, this->mobileNumber, this->price, this->quantity);
		fstream file("orders.txt", ios::out);
		file.write((char*)&temp, sizeof(temp));
		file.close();
		return true;
	}

	list<Order> read() {
		list<Order> orders;
		int i = 0;
		Order temp;
		fstream file("orders.txt", ios::in);
		while (file.read((char*)&temp, sizeof(temp))) {
			orders.push_back(temp);
			i++;
		}
		file.close();
		return orders;
	}
	bool append() {
		Order temp;
		temp.setOrder(this->productName, this->buyerName, this->mobileNumber, this->price, this->quantity);
		fstream file("orders.txt", ios::app);
		file.write((char*)&temp, sizeof(temp));
		file.close();
		return true;
	}

};

