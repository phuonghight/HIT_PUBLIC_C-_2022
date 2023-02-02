#include<iostream>
using namespace std;
int main(){
    double tien,gio,thw,phat;
    cout<<"Nhap so gio lam viec:";
    cin>>gio;
    cout<<"Nhap so luong: ";
    cin>>tien;
    cout<<"Nhap so tien thuong: ";
    cin>>thw;
    cout<<"Nhap so tien phat: ";
    cin>>phat;
    double tl=(tien*gio+thw-phat);
    cout<<"Thuc linh: "<<tl<<endl;
    return 0;
}
