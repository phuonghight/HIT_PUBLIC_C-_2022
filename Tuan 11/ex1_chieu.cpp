//1. Ten lop
//2. Cac thuoc tinh cua lop (private)
//3. Cac phuong thuc cua lop (public) 
//		+ 3.1: Ham tao: 2 ham tao: k tham so va day du tham so
//		+ 3.2: cac phuong thuc input va output
//		+ 3.3: Getters, setters (co the co)
//		+ 3.4: Cac phuong thuc khac: sap xep, tinh toan, .....

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
			cout << "Enter name: "; getline(cin, name);
			cout << "Enter age: "; cin >> age; cin.ignore();
		}
		
		void display() {
			cout << "Name: " << name << "---Age: " << age << endl;
		}
};

class Circle {
	private:
		double radius;
	public:
		Circle(double radius2) {
			radius = radius2;
		}
		
		double getArea() {
			return radius*radius*3.14;
		}
		
		double getCircumference() {
			return 2*3.14*radius;
		}
};

int main() {
	
	Circle c(10);
	cout << c.getArea() << endl;
	cout << c.getCircumference() << endl;
	return 0;
}
