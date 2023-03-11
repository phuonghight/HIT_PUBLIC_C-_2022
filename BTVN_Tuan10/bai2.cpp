#include <iostream>

using namespace std;

class HangHoa
{
private:
    string maHang, tenHang;
    int donGia, soLuong;

public:
    void nhap()
    {
        cout << "Ma hang : ";
        cin >> maHang;
        cin.ignore();
        cout << "Ten hang : ";
        getline(cin, tenHang);
        cout << "Don gia : ";
        cin >> donGia;
        cout << "So luong : ";
        cin >> soLuong;
    }

    void xuat()
    {
        cout << "Ma hang : " << maHang << endl;
        cout << "Ten hang : " << tenHang << endl;
        cout << "Don gia : " << donGia << endl;
        cout << "So luong : " << soLuong << endl;
    }
};

int main()
{
    cout << "nhap so luong hang : ";
    int n;
    cin >> n;
    HangHoa hang[n];
    for (int i = 0; i < n; i++)
    {
        cout << "nhap thong tin hang hoa " << i + 1 << endl;
        hang[i].nhap();
        cout << endl;
    }

    cout << "----------------DANH MUC HANG HOA------------------ " << endl;
    for (int i = 0; i < n; i++)
    {
        hang[i].xuat();
        cout << "_________________________" << endl;
    }
}