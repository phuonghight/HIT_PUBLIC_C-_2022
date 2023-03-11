// 1. Ten lop 
// 2. Danh sach cac thuoc tinh (private)
// 3. Danh sach cac phuong thuc (public)
//   	+ phuong thuc khoi tao (constructor)
// 		+ getters, setters
//		+ phuong thuc nhap, xuat (input, output)
//		+ phuong thuc khac: sap xep, them, sua, xoa


// Luu y khi viet 1 lop
// 1. priavte: cac thuoc tinh
// 2. public: cac phuong thuc
//			+ Phuong thuc khoi tao (khong tham so va co tham so)
// 			+ phuong thuc input output
//			+ getter, setter (co the co)

#include<iostream>

using namespace std;

class Student {
	private:
		string name;
		int age;
	public:
		Student() {
			name = "no name";
			age = -1;
		}
		
		void getInformation() {
			cout << "Enter Name: "; getline(cin, name);
			cout << "Enter Age: "; cin >> age; cin.ignore();
		}
		
		void display() {
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
		}
}; 

class Circle
{
private:
	double radius;
public:
	Circle(double r2)
	{
		radius = r2;
	}	
	
	double getArea()
	{
		return radius*radius*3.14;
	}
	
	double getCircumference()
	{
		return 2 * 3.14 * radius;
	}
};

int main() {
	Circle c(2.5);
	cout << c.getArea() << "\t" << c.getCircumference();
	return 0; 
} 

