#include<iostream>

using namespace std;

class NhanVien
{
private:
	int luong;
public:
	NhanVien()
	{
		
	}
	
	NhanVien(int luong)
	{
		this->luong = luong;	
	}	
	
	int getLuong()
	{
		return luong;
	}
	
	void setLuong(int luong)
	{
		this->luong = luong;
	}
};

class NhanVienChinhThuc : public NhanVien
{
private:
	int thuong;
public:
	NhanVienChinhThuc()
	{
		
	}
	
	NhanVienChinhThuc(int luong, int thuong) : NhanVien(luong)
	{
		this->thuong = thuong;
	}
	
	int getLuong()
	{
		return thuong + NhanVien::getLuong();
	}
};

int main()
{
	NhanVien a(10000);
	NhanVienChinhThuc c(10000, 5000);
	cout << a.getLuong() << endl;
	cout << c.getLuong();
	return 0;
}
