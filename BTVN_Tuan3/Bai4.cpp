#include <iostream>

using namespace std;

int main(){
	int n,gt=1;
	do
	{
		cout << "Nhap n: ";
		cin >> n;
	}
	while (!(0<n && n<10));
	for (int i=1; i<=n; i++) gt*=i;
	cout << gt;
	return 0;
}

