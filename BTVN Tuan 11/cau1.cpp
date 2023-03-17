#include<bits/stdc++.h>
using namespace std;
class HANG{
private:
    string maHang, tenHang;
    int donGia, soLuong;
public:
    void nhap();
    void xuat();
    int thanhTien();
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
    cout<<"So luong: ";
    cin>>soLuong;
}
int HANG::thanhTien(){
    return donGia*soLuong;
}
void HANG::xuat(){
    cout<<setw(15)<<maHang<<setw(15)<<tenHang<<setw(15)<<donGia<<setw(15)<<soLuong<<setw(15)<<thanhTien()<<endl;
}
int main(){
    int n;
    HANG a[30];
    cout<<"So mat hang: ";
    cin>>n;
    for(int i=0;i<n;i++){
        a[i].nhap();
    }
    cout<<"\nDANH SACH MAT HANG\n";
    cout<<setw(15)<<"Ma hang"<<setw(15)<<"Ten hang"<<setw(15)<<"Don gia"<<setw(15)<<"So luong"<<setw(15)<<"Thanh tien"<<endl;
    for(int i=0;i<n;i++){
        a[i].xuat();
    }
}
