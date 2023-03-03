#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 100;

struct HangHoa
{
    string maHang;
    string tenHang;
    int namSanXuat;
};

HangHoa ds[MAX_N];
int n;

void NhapHangHoavaoDanhSach(HangHoa ds[], int &n)
{
    cout << "Nhap vao so luong hang hoa: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin hang hoa thu " << i + 1 << endl;
        cout << "Ma hang: ";
        cin >> ds[i].maHang;
        cout << "Ten hang: ";
        cin.ignore();
        getline(cin, ds[i].tenHang);
        cout << "Nam san xuat: ";
        cin >> ds[i].namSanXuat;
    }
}

void DocHangHoa(HangHoa ds[], int &n)
{
    ifstream fin("input.txt");
    fin >> n;
    for (int i = 0; i < n; i++)
    {
        fin >> ds[i].maHang;
        fin.ignore();
        getline(fin, ds[i].tenHang);
        fin >> ds[i].namSanXuat;
    }
    fin.close();
}

void InHangHoa(HangHoa ds[], int n)
{
    cout << "Danh sach hang hoa:\n";
    for (int i = 0; i < n; i++)
    {
        cout << ds[i].maHang << "\t" << ds[i].tenHang << "\t" << ds[i].namSanXuat << endl;
    }
}

void GhiHangHoa(HangHoa ds[], int n)
{
    ofstream fout("output.txt");
    for (int i = 0; i < n; i++)
    {
        fout << ds[i].maHang << "\t" << ds[i].tenHang << "\t" << ds[i].namSanXuat << endl;
    }
    fout.close();
}

void TimKiemHangHoa(HangHoa ds[], int n)
{
    string maHang;
    cout << "Nhap ma hang can tim kiem: ";
    cin >> maHang;
    bool timThay = false;
    for (int i = 0; i < n; i++)
    {
        if (ds[i].maHang == maHang)
        {
            cout << "YES\n";
            cout << ds[i].maHang << "\t" << ds[i].tenHang << "\t" << ds[i].namSanXuat << endl;
            timThay = true;
            break;
        }
    }
    if (!timThay)
    {
        cout << "NO\n";
    }
}

void NhapHangHoa(HangHoa &p)
{
    cout << "Enter product code: ";
    getline(cin, p.maHang);
    cout << "Enter product name: ";
    getline(cin, p.tenHang);
    cout << "Enter production year: ";
    cin >> p.namSanXuat;
    cin.ignore();
}

void ChenHangHoa(HangHoa ds[], int &n)
{
    int pos;
    do
    {
        cout << "Nhap vao vi tri can chen: (0 < pos < " << n << "): ";
        cin >> pos;
    } while (pos <= 0 || pos >= n);

    HangHoa p;
    NhapHangHoa(p);

    for (int i = n; i > pos; i--)
    {
        ds[i] = ds[i - 1];
    }
    ds[pos] = p;

    n++;

    ofstream outFile("output.txt");
    outFile << n << endl;
    for (int i = 0; i < n; i++)
    {
        outFile << ds[i].maHang << endl;
        outFile << ds[i].tenHang << endl;
        outFile << ds[i].namSanXuat << endl;
    }
    outFile.close();

    cout << "Hang hoa da duoc chen thanh cong!" << endl;
}

void XoaHangHoa(HangHoa ds[], int &n)
{
    int pos;
    do
    {
        cout << "Nhap vi tri can xoa: (0 < pos < " << n << "): ";
        cin >> pos;
    } while (pos <= 0 || pos >= n);

    for (int i = pos; i < n - 1; i++)
    {
        ds[i] = ds[i + 1];
    }

    n--;

    ofstream outFile("output.txt");
    outFile << n << endl;
    for (int i = 0; i < n; i++)
    {
        outFile << ds[i].maHang << endl;
        outFile << ds[i].tenHang << endl;
        outFile << ds[i].namSanXuat << endl;
    }
    outFile.close();

    cout << "Hang hoa duoc xoa thanh cong" << endl;
}

void SapXepHangHoa(HangHoa ds[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ds[i].namSanXuat > ds[j].namSanXuat)
            {
                swap(ds[i], ds[j]);
            }
        }
    }

    ofstream outFile("output.txt");
    outFile << n << endl;
    for (int i = 0; i < n; i++)
    {
        outFile << ds[i].maHang << endl;
        outFile << ds[i].tenHang << endl;
        outFile << ds[i].namSanXuat << endl;
    }
    outFile.close();

    cout << "Hang hoa da duoc sap xep thanh cong" << endl;
}

int main()
{
    while (true)
    {
        cout << "-----------------MENU---------------\n";
        cout << "1. Nhap thong tin cho n hang hoa tu ban phim\n";
        cout << "2. Doc thong tin tu file input.txt\n";
        cout << "3. In ra thong tin hang hoa\n";
        cout << "4. Ghi thong tin hang hoa ra file output.txt\n";
        cout << "5. Tim kiem hang hoa theo ma hang\n";
        cout << "6. Chen hang hoa\n";
        cout << "7. Xoa hang hoa\n";
        cout << "8. Sap xep danh sach hang hoa\n";
        cout << "0. Thoat !\n";
        cout << "-------------------------------------\n";
        cout << "Nhap lua chon :";
        int lc;
        cin >> lc;
        if (lc == 1)
        {
            NhapHangHoavaoDanhSach(ds, n);
        }
        else if (lc == 2)
        {
            DocHangHoa(ds, n);
        }
        else if (lc == 3)
        {
            InHangHoa(ds, n);
        }
        else if (lc == 4)
        {
            GhiHangHoa(ds, n);
        }
        else if (lc == 5)
        {
            TimKiemHangHoa(ds, n);
        }
        else if (lc == 6)
        {
            ChenHangHoa(ds, n);
        }
        else if (lc == 7)
        {
            XoaHangHoa(ds, n);
        }
        else if (lc == 8)
        {
            SapXepHangHoa(ds, n);
        }
        else if (lc == 0)
        {
            break;
        }
    }
    return 0;
}