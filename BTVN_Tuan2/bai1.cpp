#include<iostream>

using namespace std;

int main() 
{
	int tuoi;
	cin >> tuoi;
	if(tuoi < 0) 
		cout << "Tuoi khong hop le!";	
	else if(tuoi < 18)
		cout << "Chua vao dai hoc";
	else if(tuoi == 18)
		cout << "nam 1";
	else if(tuoi == 19) 
		cout << "nam 2";
	else if(tuoi == 20) 
		cout << "nam 3";
	else if(tuoi == 21) 
		cout << "nam 4";
	else
		cout << "Sinh vien da ra truong";
	
	return 0;
}
