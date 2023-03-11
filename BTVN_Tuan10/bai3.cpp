#include <iostream>

using namespace std;

class Date
{
private:
    int d, m, y;

public:
    void nhap()
    {
        cout << "nhap ngay, thang, nam : ";
        cin >> d >> m >> y;
    }

    void xuat()
    {
        cout << d << "/" << m << "/" << y << endl;
    }
};

class NhanSu
{
private:
    string maNhanSu, hoTen;
    Date NS;

public:
    void nhap()
    {
        cout << "ma nhan su : ";
        cin >> maNhanSu;
        cin.ignore();
        cout << "ho ten : ";
        getline(cin, hoTen);
        NS.nhap();
    }

    void xuat()
    {
        cout << "----------------HIEN THI--------------\n";
        cout << "ma nhan su : " << maNhanSu << endl
             << "ho ten : " << hoTen << endl;
        cout << "ngay sinh : ";
        NS.xuat();
    }
};

int main()
{
    NhanSu x;
    x.nhap();
    x.xuat();
}