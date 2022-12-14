#include<iostream>
using namespace std;
int main(){
    double a,b;
    cout<<"Nhap a: ";cin>>a;
    cout<<"Nhap b: ";cin>>b;
    double tam=a;
    a=b;
    b=tam;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b;
    return 0;

}
