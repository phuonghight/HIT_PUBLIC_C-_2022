#include <iostream>

using namespace std;

int main(){
	long long n;
	do
	{
		cout << "Nhap n: ";
		cin >> n;
	}
	while (!(n>0));
	int sum=0;
	while (n>0)
	{
		sum+=n%10;
		n/=10;
	}
	cout << sum;
	return 0;
}

