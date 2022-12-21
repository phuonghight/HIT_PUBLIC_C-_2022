#include<iostream>

using namespace std;

int main() 
{
	int nam;
	cin >> nam;
	if(nam < 0)
		cout << "Nam k hop le";
	else if((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
		cout << "Nam nhuan";
	else 
		cout << "Nam k nhuan";
	
	return 0;
}
