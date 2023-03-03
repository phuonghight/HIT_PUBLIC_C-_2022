#include<iostream>

using namespace std;

class DiaChi
{
private:
	string huyen, thanhpho;
public:
	void input()
	{
		cout << "Nhap huyen: ";
		getline(cin, huyen);
		cout << "Nhap thanh pho: ";
		getline(cin, thanhpho);
	}
	
	void output()
	{
		cout << "Huyen: "<<huyen <<", TP: "<<thanhpho<<endl;
	}
};
class SinhVien
{
	// thuoc tinh cua lop SinhVien
private:
	string ten;
	int tuoi;
	DiaChi dc_nha;
	// phuong thuc cua lop SinhVien
public:
	// setter: dung de thay doi thong tin cua doi tuong
	void setTen(string ten2)
	{
		ten = ten2;
	}
	// getter: dung de tra ve thong tin thuoc tinh cua doi tuong
	string getTen()
	{
		return ten;
	}
	
	void setTuoi(int tuoi2)
	{
		tuoi = tuoi2;
	}
	
	int getTuoi()
	{
		return tuoi;
	}
	
	void input()
	{
		cout << "Nhap ten: ";
		getline(cin, ten);
		cout << "Nhap tuoi: ";
		cin >> tuoi;
		cin.ignore();
		dc_nha.input();	
	}	
	void output()
	{
		cout << "Ten: " << ten << ", Tuoi: "<< tuoi << endl;
		dc_nha.output();	
	}	
};

int main(){
	SinhVien a;
	a.input();
	a.output();
	return 0;
}