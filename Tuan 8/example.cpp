#include <iostream>
#include <cstdio>
#include <fstream>
using namespace std;

/*
Viet chuong trinh nhap mot so nguyen N. Tao mot mang luu co kieu du lieu
SinhVien {MSV, HovaTen, Tuoi) voi kieu du lieu duoc tao bang struct va thuc hien cac yeu cau:
1. Cho nguoi dung nhap thong tin cua cac ban sinh vien
2. Xuat ra man hinh thong tin cua tat ca cac sinh vien
3. Tim thong tin cua sinh vien (nhieu sinh vien) lon tuoi nhat
*/


struct SinhVien {
    int Tuoi;
    string MSV, HovaTen;
};

void Nhap(SinhVien *&a, int &n) {
    cout << "Nhap so luong sinh vien: ";
    cin >> n;

    a = new SinhVien[n];

    for (int i=0; i<n; i++) {
        cout << "Nhap thong tin cua sinh vien thu " << i << ":\n";
        cout << "MSV: "; cin >> a[i].MSV; cin.ignore();
        cout << "Ho va ten: "; getline(cin, a[i].HovaTen);
        cout << "Tuoi: "; cin >> a[i].Tuoi; cin.ignore();
    }
}

void Xuat(SinhVien *a, int n) {
    cout << "\nThong tin cua cac sinh vien la: \n"
    << "MSV -- Ho va ten -- Tuoi:\n";
    for (int i=0; i<n; i++) {
        cout << "[" << i << "]: " << a[i].MSV << " -- " << a[i].HovaTen << " -- " << a[i].Tuoi << "\n";
    }
}

void SinhVienLonTuoi(SinhVien *a, int n) {
    cout << "\nNhung sinh vien lon tuoi nhat trong danh sach la:\n"
    << "MSV -- Ho va ten -- Tuoi:\n";
    int TuoiLonNhat = a[0].Tuoi;

    for (int i=1; i<n; i++)
        TuoiLonNhat = max(TuoiLonNhat, a[i].Tuoi);

    for (int i=0; i<n; i++) {
        if (a[i].Tuoi == TuoiLonNhat) {
            cout << "[" << i << "]: " << a[i].MSV << " -- " << a[i].HovaTen << " -- " << a[i].Tuoi << "\n";
        }
    }
}

int main() {
    int N;
    SinhVien *a = NULL;
    Nhap(a, N);
    Xuat(a, N);
    SinhVienLonTuoi(a, N);
    delete[] a;
}
