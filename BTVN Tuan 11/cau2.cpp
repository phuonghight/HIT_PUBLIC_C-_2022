#include<bits/stdc++.h>
using namespace std;
class NSX{
private:
    string maNSX, tenNSX, dcNSX;
public:
    void nhap();
    void xuat();
};
class HANG{
private:
    string maHang, tenHang;
    NSX x;
public:
    void nhap();
    void xuat();
};
void NSX::nhap(){
    cout<<"Ma NSX: ";
    fflush(stdin);
    getline(cin, maNSX);
    cout<<"Ten NSX: ";
    fflush(stdin);
    getline(cin, tenNSX);
    cout<<"Dia chi NSX: ";
    fflush(stdin);
    getline(cin, dcNSX);
}
void NSX::xuat(){
    cout<<"Ma NSX: "<<maNSX<<endl;
    cout<<"Ten NSX: "<<tenNSX<<endl;
    cout<<"Dia chi NSX: "<<dcNSX<<endl;
}
void HANG::nhap(){
    cout<<"Ma hang: ";
    fflush(stdin);
    getline(cin, maHang);
    cout<<"Ten hang: ";
    fflush(stdin);
    getline(cin, tenHang);
    x.nhap();
}
void HANG::xuat(){
    cout<<"Ma hang: "<<maHang<<endl;
    cout<<"Ten hang: "<<tenHang<<endl;
    x.xuat();
}
int main(){
    HANG a;
    a.nhap();
    cout<<"\nTHONG TIN MAT HANG:\n";
    a.xuat();
}
