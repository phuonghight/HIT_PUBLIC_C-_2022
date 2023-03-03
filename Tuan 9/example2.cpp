#include<iostream>

using namespace std;

class Address{
private:
	string huyen, thanhpho;
public:
	void input() {
		cout << "Nhap huyen: ";
		getline(cin, huyen);
		cout << "Nhap thanh pho: ";
		getline(cin, huyen);
	}
	
	void output() {
		cout << "Huyen: "<<huyen<<endl;
		cout << "Thanh pho: "<<thanhpho<<endl;
	}
};

class BirthDay{
private:
	int day, month, year;
public:
	void input() {
		cout << "Nhap ngay thang nam: ";
		cin >> day >> month >> year;
		cin.ignore();
	}
	
	void output() {
		cout << "Ngay sinh: "<<day << "/"<<month<<"/"<<year;
	}
};

class Worker{
private:
	string name;
	int age;
	BirthDay bd;
	Address a;
public:
	void input() {
		cout << "Nhap ten: ";
		getline(cin, name);
		cout << "Nhap tuoi: ";
		cin >> age;
		cin.ignore();
		bd.input();
		a.input();
	}
	void output() {
		cout << "Ten: "<<name<<" , Tuoi: " << age <<endl;
		bd.output();
		a.output();
	}
};

int main() {
	Worker w;
	w.input();
	w.output();
	return 0;
}
