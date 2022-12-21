#include<iostream>
using namespace std;
int main()
{
    //nhap vao 1 so xem no co phai so chan khong
    // && dau va
    // || dau hoac
    int a;
    cin>>a;
    if(a % 2 == 0 && a != 0){
        cout<<"a la so chan";
    }else if(a == 0){
        cout<<"a = 0";
    }else{
        cout<<"a la so le";
    }
}
