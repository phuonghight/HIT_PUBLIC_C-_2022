#include<iostream>
using namespace std;
int main()
{
   //kiem tra 3 canh cua 1 tam xem co hop le khong
    int a, b, c;
    cin>>a>>b>>c;
    if((a+b) > c && (a+c)>b && (b+c) > a)
    {
        cout<<"day la tam giac hop le";
    }else{
        cout<<" 3 canh tam giac khong hop le";
    }

}
