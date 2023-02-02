#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n;
	do
	{
		cout << "Nhap n: ";
		cin >> n;
	}
	while (!(0<n && n<1000000));
	int kq=0;
	while (n>0)
	{
		int tmp = n%10;
		kq = kq*10 + tmp;
		n/=10;
	}
	cout << kq;
	return 0;
}

