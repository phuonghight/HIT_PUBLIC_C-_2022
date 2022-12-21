#include<iostream>
using namespace std;
int main()
{
    // bien luan phuong trinh 1 an: a*x + b =0 x=?

    float a, b;
    cout<<"Nhap a= "; cin>>a;
    cout<<"Nhap b= "; cin>>b;
    if( a == 0 && b != 0 )
        cout << " phuong trinh vo nghiem ";
    else if ( a == 0 && b == 0 )
        cout << " phuong trinh co vo so nghiem ";
    else
        cout<<" x=" << (0-b)/a;
    return 0 ;
}
