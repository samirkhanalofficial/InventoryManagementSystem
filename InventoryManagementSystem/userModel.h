#include<iostream>
#include<fstream>
#include<string.h>
#include<list>
using namespace std;

class User {
	char name[50] = "admin", email[200] = "admin@admin.com", password[16] = "admin@123";
public:
	void setUser(char name1[50], char email1[200], char password1[16]) {
		strcpy(name, name1);
		strcpy(email, email1);
		strcpy(password, password1);
	}
	char* getName() {
		return name;
	}
	char* getEmail() {
		return email;
	}
	char* getPassword() {
		return password;
	}
	void write() {
		User u;
		u.setUser(this->name, this->email, this->password);
		fstream file("users.txt", ios::out);
		file.write((char*)&u, sizeof(u));
		file.close();
	}

	list<User> read() {
		list<User> u;
		int i = 0;
		User temp;
		fstream file("users.txt", ios::in);
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
		for (int i = 0; i < users.size() + 1; i++) {
			temp = users.front();

			if ((strcmp(this->email, temp.email) == 0) && (strcmp(this->password, temp.password) == 0)) {
				strcpy(this->name, temp.getName());
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
		fstream file("users.txt", ios::app);
		file.write((char*)&u, sizeof(u));
		file.close();
		return true;
	}
	bool deleteUser() {
		bool islogined = this->login();
		User temp;
		list<User> users = this->read();
		if (islogined == true) {
			fstream file("users.txt", ios::out);
			for (int i = 0; i < users.size() + 1; i++) {
				temp = users.front();
				if ((strcmp(this->email, temp.email) == 0) && (strcmp(this->password, temp.password) == 0)) {
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
			fstream file("users.txt", ios::out);
			for (int i = 0; i < users.size() + 1; i++) {
				temp = users.front();
				if ((strcmp(this->email, temp.email) == 0) && (strcmp(this->password, temp.password) == 0)) {
					strcpy(this->password, newpassword);
					strcpy(temp.password, newpassword);
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