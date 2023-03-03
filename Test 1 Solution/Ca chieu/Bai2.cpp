#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 100;

struct NhanVien
{
    string ma;
    string ten;
    int tuoi;
};

NhanVien ds[MAX_N];
int n;

void NhapNhanVienvaoDanhSach(NhanVien ds[], int &n)
{
    cout << "Nhap vao so luong nhan vien: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin nhan vien thu " << i + 1 << endl;
        cout << "Ma: ";
        cin >> ds[i].ma;
        cout << "Ten: ";
        cin.ignore();
        getline(cin, ds[i].ten);
        cout << "Tuoi: ";
        cin >> ds[i].tuoi;
    }
}

void DocNhanVien(NhanVien ds[], int &n)
{
    ifstream fin("input.txt");
    fin >> n;
    for (int i = 0; i < n; i++)
    {
        fin >> ds[i].ma;
        fin.ignore();
        getline(fin, ds[i].ten);
        fin >> ds[i].tuoi;
    }
    fin.close();
}

void InNhanVien(NhanVien ds[], int n)
{
    cout << "Danh sach nhan vien:\n";
    for (int i = 0; i < n; i++)
    {
        cout << ds[i].ma << "\t" << ds[i].ten << "\t" << ds[i].tuoi << endl;
    }
}

void GhiNhanVien(NhanVien ds[], int n)
{
    ofstream fout("output.txt");
    for (int i = 0; i < n; i++)
    {
        fout << ds[i].ma << "\t" << ds[i].ten << "\t" << ds[i].tuoi << endl;
    }
    fout.close();
}

void TimKiemNhanVien(NhanVien ds[], int n)
{
    string ma;
    cout << "Nhap ma can tim kiem: ";
    cin >> ma;
    bool timThay = false;
    for (int i = 0; i < n; i++)
    {
        if (ds[i].ma == ma)
        {
            cout << "YES\n";
            cout << ds[i].ma << "\t" << ds[i].ten << "\t" << ds[i].tuoi << endl;
            timThay = true;
            break;
        }
    }
    if (!timThay)
    {
        cout << "NO\n";
    }
}

void ChenNhanVien(NhanVien ds[], int &n)
{
    int pos;
    do
    {
        cout << "Nhap vao vi tri can chen: (0 < pos < " << n << "): ";
        cin >> pos;
    } while (pos <= 0 || pos >= n);

    NhanVien p;
    cout << "Ma: ";
    cin >> p.ma;
    cout << "Ten: ";
    cin.ignore();
    getline(cin, p.ten);
    cout << "Tuoi: ";
    cin >> p.tuoi;

    for (int i = n; i > pos; i--)
    {
        ds[i] = ds[i - 1];
    }
    ds[pos] = p;

    n++;

    GhiNhanVien(ds, n);
}

void XoaNhanVien(NhanVien ds[], int &n)
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

    GhiNhanVien(ds, n);
}

void SapXepNhanVien(NhanVien ds[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ds[i].tuoi < ds[j].tuoi)
            {
                swap(ds[i], ds[j]);
            }
        }
    }

    GhiNhanVien(ds, n);
}

int main()
{
    while (true)
    {
        cout << "-----------------MENU---------------\n";
        cout << "1. Nhap thong tin cho n nhan vien tu ban phim\n";
        cout << "2. Doc thong tin tu file input.txt\n";
        cout << "3. In ra thong tin nhan vien\n";
        cout << "4. Ghi thong tin nhan vien ra file output.txt\n";
        cout << "5. Tim kiem nhan vien theo ma\n";
        cout << "6. Chen nhan vien\n";
        cout << "7. Xoa nhan vien\n";
        cout << "8. Sap xep danh sach nhan vien\n";
        cout << "0. Thoat !\n";
        cout << "-------------------------------------\n";
        cout << "Nhap lua chon :";
        int lc;
        cin >> lc;
        if (lc == 1)
        {
            NhapNhanVienvaoDanhSach(ds, n);
        }
        else if (lc == 2)
        {
            DocNhanVien(ds, n);
        }
        else if (lc == 3)
        {
            InNhanVien(ds, n);
        }
        else if (lc == 4)
        {
            GhiNhanVien(ds, n);
        }
        else if (lc == 5)
        {
            TimKiemNhanVien(ds, n);
        }
        else if (lc == 6)
        {
            ChenNhanVien(ds, n);
        }
        else if (lc == 7)
        {
            XoaNhanVien(ds, n);
        }
        else if (lc == 8)
        {
            SapXepNhanVien(ds, n);
        }
        else if (lc == 0)
        {
            break;
        }
    }
    return 0;
}