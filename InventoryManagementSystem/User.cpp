
#include<iostream>
#include<fstream>
#include<string>
#include<list>
using namespace std;
string userFileLocation = "users.txt";
class User
{

	string name = "admin", email = "admin@admin.com", password = "admin@123";
public:
	void setUser(string name1, string email1, string password1) {
		name = name1;
		email = email1;
		password = password1;
	}
	string getName() {
		return name;
	}
	string getEmail() {
		return email;
	}
	string getPassword() {
		return password;
	}
	void write() {
		User u;
		u.setUser(this->name, this->email, this->password);
		fstream file(userFileLocation, ios::out);
		file.write((char*)&u, sizeof(u));
		file.close();
	}

	list<User> read() {
		list<User> u;
		int i = 0;
		User temp;
		fstream file(userFileLocation, ios::in);
		while (file.read((char*)&temp, sizeof(temp))) {
			u.push_back(temp);
			i++;
		}
		file.close();
		return u;
	}
	bool login() {
		User temp;
		list<User> users = this->read();
		if (users.size() == 0) {
			return 0;
		}
		for (int i = 0; i < users.size() + 1; i++) {
			temp = users.front();

			if (email == temp.email && password == temp.password) {
				name = temp.name;
				return true;
			}
			users.pop_front();
		}
		return false;

	}
	bool append() {
		if (this->login()) {
			return false;
		}
		User u;
		u.setUser(this->name, this->email, this->password);
		fstream file(userFileLocation, ios::app);
		file.write((char*)&u, sizeof(u));
		file.close();
		return true;
	}
	bool deleteUser() {
		bool islogined = this->login();
		User temp;
		list<User> users = this->read();
		if (islogined == true) {
			fstream file(userFileLocation, ios::out);
			for (int i = 0; i < users.size() + 1; i++) {
				temp = users.front();
				if (email == temp.email && password == temp.password) {
				}
				else {
					file.write((char*)&temp, sizeof(temp));
				}
				users.pop_front();
			}
			file.close();
			return true;
		}
		else {
			return false;
		}
		return false;
	}
	bool changePassword(char newpassword[16]) {
		bool islogined = this->login();
		User temp;
		list<User> users = this->read();
		if (islogined == true) {
			fstream file(userFileLocation, ios::out);
			for (int i = 0; i < users.size() + 1; i++) {
				temp = users.front();
				if (email == temp.email && password == temp.password) {
					temp.password = newpassword;
					password = newpassword;
				}
				file.write((char*)&temp, sizeof(temp));

				users.pop_front();
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


