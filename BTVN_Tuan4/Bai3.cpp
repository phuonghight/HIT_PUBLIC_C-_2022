#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++)
	{
		cin >> a[i];
		a[i] = abs(a[i]);
	}
	for (int i=n-1; i>0; i--)
	{
		for (int j=0; j<i; j++)
		{
			if (a[j] > a[j+1])
			{
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	for (int i=0; i<n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}

