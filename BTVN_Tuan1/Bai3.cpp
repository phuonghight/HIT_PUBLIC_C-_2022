#include<iostream>
using namespace std;
int main()
{
    double a,b;
    cout<<"Nhap a: ";cin>>a;
    cout<<"Nhap b: ";cin>>b;
    if(a==0||b==0)
        cout<<"Vuii long nhap lai";
    else
    {
        cout<<"a+b = "<<a+b<<endl;
        cout<<"a-b = "<<a-b<<endl;
        cout<<"a*b = "<<a*b<<endl;
        cout<<"a/b="<<(double)a/b<<endl;
    }
    return 0;
}
