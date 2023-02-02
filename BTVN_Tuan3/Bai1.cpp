#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int a,b;
	do
	{
		cout << "Nhap 2 so a va b: ";
		cin >> a >> b;
	}
	while (!(0<a && a<b && b<100));
	for (int i=a+1; i<b; i++)
	{
		if (i%2==0) cout << i << " ";
	}
	return 0;
}

