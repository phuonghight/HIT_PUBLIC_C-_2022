#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n;
	double sum=0;
	do
	{
		cout << "Nhap n: ";
		cin >> n;
	}
	while (!(0<n && n<10000));
	for (int i=1; i<=n; i++) sum=sqrt(2+sum);
	cout << sum;
	return 0;
}

