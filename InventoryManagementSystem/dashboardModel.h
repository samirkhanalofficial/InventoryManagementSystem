#pragma once
#include<iostream>
#include<list>
#include"userModel.h"
#include"productModel.h"
#include"orderModel.h"
using namespace std;
class Dashboard {
public:
	int getUserCount() {
		User u;
		list<User> users;
		users = u.read();
		return users.size();
	}
	int getProductsCount() {
		Product p;
		list<Product> products;
		products = p.read();
		return products.size();
	}
	int getOrderCounts() {
		Order o;
		list<Order> orders;
		orders = o.read();
		return orders.size();
	}

};

