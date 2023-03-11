#include<iostream>

using namespace std;

class NCC
{
private:
	string ma, ten, diachi;
public:
	NCC()
	{
		
	}
	
	NCC(string ma2, string ten2, string diachi2)
	{
		ma = ma2;
		ten = ten2;
		diachi = diachi2;
	}
	
	void input()
	{
		cout << "Ma NCC: ";
		getline(cin, ma);
		cout << "Ten NCC: ";
		getline(cin, ten);
		cout << "Dia chi: ";
		getline(cin, diachi);
	}
	
	void output()
	{
		cout << "Ma: " << ma << ", Ten: " << ten << ", DC: " << diachi << endl;
	}
};

class Hang
{
private:
	string ten;
	float gia;
	int sl;	
public:
	Hang()
	{
		
	}
	
	Hang(string ten2, float gia2, int sl2)
	{
		ten = ten2;
		gia = gia2;
		sl = sl2;
	}
	
	void input()
	{
		cout << "Ten H: ";
		getline(cin, ten);
		cout << "Gia: ";
		cin >> gia;
		cout << "So luong: ";
		cin >> sl;
		cin.ignore();
	}
	
	void output()
	{
		cout << "Ten: " << ten << ", DG: " << gia << ", SL: " << sl << endl;
	}
	
	float tinhTien()
	{
		return sl * gia;
	}
};

class Phieu
{
private:
	string ma, ngaylap;
	NCC n;
	Hang dshang[3];
public:
	Phieu()
	{
		
	}
	
	Phieu(string ma2, string ngaylap2, NCC n2, Hang ds2[3])
	{
		ma = ma2;
		ngaylap = ngaylap2;
		n = n2;
		for(int i = 0 ; i < 3 ; i++)
		{
			dshang[i] = ds2[i];
		}
	}
	
	void input()
	{
		cout << "Ma phieu: ";
		getline(cin, ma);
		cout << "Ngay lap: ";
		getline(cin, ngaylap);
		n.input();
		for(int i = 0; i < 3;i++)
		{
			dshang[i].input();
		}
	}
	
	void output()
	{
		cout << "Ma phieu: " << ma << endl;
		cout << "Ngay lap: " << ngaylap << endl;
		n.output();
		for(int i = 0; i < 3;i++)
		{
			dshang[i].output();
		}
	}
	
	float tong()
	{
		float sum = 0;
		for (int i = 0; i < 3 ;i++)
		{
			sum += dshang[i].tinhTien();
		}
	}
};

int main()
{
	Phieu x;
	x.input();
	x.output();
	cout << x.tong();
	return 0;
}
