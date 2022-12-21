#include<iostream>

using namespace std;

int main() 
{
	int doanhThu;
	cin >> doanhThu;
	float hoaHong;
	if(doanhThu < 0) 
		cout << "Doanh thu k hop le";
	else if (doanhThu <= 200) 
		hoaHong = doanhThu * 0.1;
	else if (doanhThu <= 500) 
		hoaHong = doanhThu * 0.15;
	else
		hoaHong = doanhThu * 0.25;
	
	cout << hoaHong;
	return 0;
}
