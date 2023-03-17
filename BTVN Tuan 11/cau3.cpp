#include<bits/stdc++.h>
using namespace std;
class HANG{
private:
    string maHang, tenHang;
    int donGia;
public:
    void nhap();
    void xuat();
};
class PHIEU{
private:
    string maPhieu;
    HANG x[30];
    int n;
public:
    void nhap();
    void xuat();
};
void HANG::nhap(){
    cout<<"Ma hang: ";
    fflush(stdin);
    getline(cin, maHang);
    cout<<"Ten hang: ";
    fflush(stdin);
    getline(cin, tenHang);
    cout<<"Don gia: ";
    cin>>donGia;
}
void HANG::xuat(){
    cout<<setw(20)<<maHang<<setw(20)<<tenHang<<setw(20)<<donGia<<endl;
}
void PHIEU::nhap(){
    cout<<"Ma phieu: ";
    fflush(stdin);
    getline(cin, maPhieu);
    cout<<"So mat hang: ";
    cin>>n;
    for(int i=0;i<n;i++){
        x[i].nhap();
    }
}
void PHIEU::xuat(){
    cout<<"Ma phieu: "<<maPhieu<<endl;
    cout<<setw(20)<<"Ma hang"<<setw(20)<<"Ten hang"<<setw(20)<<"Don gia"<<endl;
    for(int i=0;i<n;i++){
        x[i].xuat();
    }
}
int main(){
    PHIEU a;
    a.nhap();
    cout<<"\nTHONG TIN PHIEU\n";
    a.xuat();
}
