#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	int da=0, keo=0;
	for (int i=0; i<n; i++)
	{
		cin >> a[i];
		if (a[i]%2 == 0)
		{
			da+=a[i];
		}
		else
		{
			keo+=a[i];
		}
	}
	if (da > keo)
	{
		cout << "Da";
	}
	else if (da < keo)
	{
		cout << "Keo";
	}
	else
	{
		cout << "Bang nhau";
	}
	return 0;
}

