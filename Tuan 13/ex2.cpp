// nap chong phuong thuc        	--nap chong toan tu: operator
#include<iostream>

using namespace std;

class Tinh
{
public:
	int cong(int a, int b)
	{
		return a + b;
	}
	
	double cong(double a, double b)
	{
		return a + b;
	}
	
	int cong(int a, int b, int c)
	{
		return a + cong(b, c);
	}
	
};

int main()
{
	Tinh t;
	cout << t.cong(1 , 1) << endl;
	cout << t.cong(2.0, 3.3) << endl;
	cout << t.cong(2, 1, 3) << endl;
}
