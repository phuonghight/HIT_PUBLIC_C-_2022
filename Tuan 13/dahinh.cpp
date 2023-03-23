#include <iostream>
using namespace std;


// điều kiện có tính đa hình: kế thừa, virtual, con trỏ 
class DongVat {

public:
	virtual void keu() {
		cout << "dong vat keu" << endl;
	}
};

class Meo : public DongVat {
public:
	void keu() {
		cout << "meo" << endl;
		cout << "meow meow" << endl;
	}
};

class NhanVien {
private:
	int tuoi;
protected:
	int luong;
public:
	NhanVien(int luong) {
		this->luong = luong;
	}
	
	virtual void hamAo() {
		cout << "day la ham ao" << endl;
	} // ham ao
	
	virtual int getLuong() = 0; // ham thuan ao
};

class NhanVienChinhThuc : public NhanVien {
private:
	int thuong;
public:
	NhanVienChinhThuc(int luong, int thuong) : NhanVien(luong) {
		this->thuong = thuong;
	}
	int getLuong() {
		return thuong + luong;
	}
};

int main() {
//	DongVat dv;
//	dv.keu();
//	Meo m;
//	m.keu();
	
//	DongVat *dv = new DongVat();
//	dv->keu();
//	DongVat *dvMeo = new Meo();
//	dvMeo->keu();

	NhanVien *x = new NhanVienChinhThuc(100, 20);
	cout << x->getLuong();
	return 0;
}
