#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	int max = a[0];
	int pos;
	for (int i=0; i<n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			pos = i;
		}
	}
	bool check = true;
	while (check)
	{
		for (int i=pos; i<n-1; i++)
		{
			a[i] = a[i+1];
		}
		n--;
		for (int i=0; i<n; i++)
		{
			if (a[i] == max)
			{
				check = true;
				pos = i;
				break;
			}
			if (i == n-1)
			{
				check = false;
			}
		}
		if(n==0) check = false;
	}
	for (int i=0; i<n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}

