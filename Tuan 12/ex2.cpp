#include<iostream>
#include<iomanip>

using namespace std;

class SinhVien
{
private:
	string tensv, masv, malop;
public:
	SinhVien() 
	{
	}
	SinhVien(string tensv, string masv, string malop)
	{
		this->tensv = tensv;
		this->masv = masv;
		this->malop = malop;
	}
	
	void input()
	{
		cout << "Nhap ten sv: ";
		getline(cin, tensv);
		cout << "Nhap ma sv: ";
		getline(cin, masv);
		cout << "Nhap ma lop: ";
		getline(cin, malop);
	}
	
	void output()
	{
		cout << "Ten: " << tensv << ", ma: " << masv << ", malop: " << malop << endl;
	}
};

class Sach
{
private:
 	string masach, tensach, nxb, ghichu;
public:
	Sach() 
	{
	}
	Sach(string masach, string tensach, string nxb, string ghichu)
	{
		this->masach = masach;
		this->tensach = tensach;
		this->nxb = nxb;
		this->ghichu = ghichu;
	}
	
	void input()
	{
		cout << "Nhap ma sach: ";
		getline(cin, masach);
		cout << "Nhap ten sach: ";
		getline(cin, tensach);
		cout << "Nhap nxb: ";
		getline(cin, nxb);
		cout << "Nhap ghi chu: ";
		getline(cin, ghichu);
	}
	
	void output()
	{
		// ma sach		ten	sach     nxb     ghi chu
		cout << setw(15) << left <<masach;
		cout << setw(15) << left <<tensach;
		cout << setw(15) << left <<nxb;
		cout << setw(15) << right <<ghichu << endl;
	}	
};

class Phieu
{
private:
	string maphieu, ngay;
	SinhVien sv;
	Sach ds[100];
	int soluong;
public:
	Phieu()
	{	
	}
	Phieu(string maphieu, string ngay, SinhVien sv, Sach ds[], int soluong)
	{
		this->maphieu = maphieu;
		this->ngay = ngay;
		this->sv = sv;
		this->soluong = soluong;
		for(int i = 0; i < soluong; i++)
		{
			this->ds[i] = ds[i];
		}
	} 
	
	void input()
	{
		cout << "Ma phieu: ";
		getline(cin, maphieu);
		cout << "Ngay muon: ";
		getline(cin, ngay);
		sv.input();
		cout << "So luong sach: ";
		cin >> soluong;
		cin.ignore();
		for(int i = 0; i < soluong; i++)
		{
			cout << "Sach thu " << i + 1 << endl;
			ds[i].input();
		}
	}
	
	void output()
	{
		cout << "Ma phieu: " << maphieu << endl;
		cout << "Ngay muon: " << ngay << endl;
		sv.output();
		cout << setw(15) << left <<"Ma sach";
		cout << setw(15) << left <<"Ten sach";
		cout << setw(15) << left <<"nha xb";
		cout << setw(15) << right <<"ghi chu" << endl;
		for(int i = 0; i < soluong; i++)
		{
			ds[i].output();
		}
	}
};

int main()
{
	Phieu muon;
	muon.input();
	muon.output();
	return 0;
} 
