#include<iostream>

using namespace std;

struct Rectangle
{
	int width, length;
	
	void input() {
		cin >> width >> length;
	}
	
	int chuVi() {
		return (width+length)*2;
	}	
	
	int dienTich() {
		return width*length;
	}
};

int main() {
	Rectangle re;
	re.input();
	cout << re.chuVi() << " " << re.dienTich();
	return 0;
}
