#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

double S(double x, int n)
{
    double sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum += pow(x, 2 * i + 1) / factorial(2 * i + 1);
    }
    return sum;
}

int main()
{
    double x;
    int n;
    cout << "Nhap gia tri x: ";
    cin >> x;
    cout << "Nhap gia tri n: ";
    cin >> n;
    double result = S(x, n);
    cout << "Gia tri cua bieu thuc S(" << n << ") la: " << result << endl;
    return 0;
}