#pragma once
#include<iostream>
#include<fstream>
#include<string.h>
#include<list>
using namespace std;
class Product {
	char productName[150] = "Nike SHoes 3162";
	char description[500] = "Nike Summer Sports shoes is the collection of best selling shoes in Nepal by Nike.Its is a branded shoe with high quality build materials.";
	int stocks = 20;
	float price = 30.00;
public:
	void setProduct(char productName1[150], char description1[500], int stocks1, float price1) {
		strcpy(productName, productName1);
		strcpy(description, description1);
		stocks = stocks1;
		price = price1;
	}
	char* getProductName() {
		return productName;
	}
	char* getDescription() {
		return description;
	}
	int getStocks() {
		return stocks;
	}
	float getPrice() {
		return price;
	}
	bool write() {
		Product temp;
		temp.setProduct(this->productName, this->description, this->stocks, this->price);
		fstream file("products.txt", ios::out);
		file.write((char*)&temp, sizeof(temp));
		file.close();
		return true;
	}

	list<Product> read() {
		list<Product> products;
		int i = 0;
		Product temp;
		fstream file("products.txt", ios::in);
		while (file.read((char*)&temp, sizeof(temp))) {
			products.push_back(temp);
			i++;
		}
		file.close();
		return products;
	}
	bool productAvailable() {
		Product temp;
		list<Product> products = this->read();
		for (int i = 0; i < products.size() + 1; i++) {
			temp = products.front();
			if ((strcmp(this->productName, temp.productName) == 0)) {
				strcpy(this->description, temp.description);
				this->stocks = temp.stocks;
				this->price = temp.price;
				return true;
			}
			products.pop_front();
		}
		return false;

	}
	bool append() {
		if (this->productAvailable()) {
			return false;
		}
		Product temp;
		temp.setProduct(this->productName, this->description, this->stocks, this->price);
		fstream file("products.txt", ios::app);
		file.write((char*)&temp, sizeof(temp));
		file.close();
		return true;
	}
	bool deleteProduct() {
		bool isproductAvailable = this->productAvailable();
		Product temp;
		list<Product> products = this->read();
		if (isproductAvailable == true) {
			fstream file("products.txt", ios::out);
			for (int i = 0; i < products.size() + 1; i++) {
				temp = products.front();
				if ((strcmp(this->productName, temp.productName) == 0)) {
				}
				else {
					file.write((char*)&temp, sizeof(temp));
				}
				products.pop_front();
			}
			file.close();
			return true;
		}
		else {
			return false;
		}
		return false;
	}

};
