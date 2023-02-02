#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+1];
	for (int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	int min=a[0], max=a[0];
	for (int i=0; i<n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	cout << max - min << "\n";
	for (int i=n; i>0; i--)
	{
		a[i] = a[i-1];
	}
	a[0] = 5;
	for (int i=0; i<=n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}

