#include <iostream>
#include <vector>

using namespace std;

class School {
	private:
		string name;
		string date;
	public:
		School() {}
		School(string name, string date) {
			this->name = name;
			this->date = date;
		}
		
		string getName() {
			return this->name;	
		}

		string getDate() {
			return this->date;
		}

		void setName(string name) {
			this->name = name;
		}

		void setDate(string date) {
			this->date = date;
		}

		void input() {
			cout << "Name: ";
			getline(cin, this->name);
			cout << "Date: ";
			getline(cin, this->date);
		}
		void output() {
			cout << "School[name: " + this->name + ", date: " + date + "]" << endl;
		}
};

class Faculty {
	private:
		string name;
		School sch;
	public:
		Faculty() {}
		Faculty(string name, School sch) {
			this->name = name;
			this->sch = sch;	
		}

		string getName() {
			return this->name;
		}

		School getSch() {
			return this->sch;
		}

		void setName(string name) {
			this->name = name;
		}

		void setSch(School sch) {
			this->sch = sch;
		}

		void input() {
			cout << "Name: ";
			getline(cin, this->name);
			cout << "School: ";
			School s;
			s.input();
			this->sch = s;
		}

		void output() {
			cout << "Faculty[name: " + this->name + ", sch: " ;
			this->sch.output();
			cout << "]" << endl;
		}
};

class Student {
	private:
		Faculty fac;
		string name;
		int age;
	public:
		Student() {}
		Student(Faculty fac, string name, int age) {
			this->fac = fac;
			this->name = name;
			this->age = age;
		}
		
		Faculty getFac() {
			return this->fac;
		}

		string getName() {
			return this->name;
		}

		int getAge() {
			return this->age;
		}

		void setFac(Faculty fac) {
			this->fac = fac;
		}

		void setName(string name) {
			this->name = name;
		}

		void setAge(int age) {
			this->age = age;
		}

		void input() {
			Faculty f;
			cout << "Faculty: ";
			f.input();
			this->fac = f;
			cout << "Name: ";
			getline(cin, this->name);
			cout << "Age: ";
			cin >> this->age;
		}

		void output() {
			cout << "Student[ ";
			this->fac.output(); 
			cout << ", name: " << this->name << ", age: " << this->age + "]" << endl;
		}
};


// Bai 2

class ARRAY {
	private:
		int *VALUE;
		int n;
	public:
		ARRAY() {
			this->n = 0;
		}

		ARRAY(int n) {
			this->VALUE = new int[n];
			this->n = n;
			for(int i = 0; i < n; i++) {
				VALUE[i] = 0;
			}
		}

		~ARRAY() {
			delete[] this->VALUE;
			this->n = 0;
		}

		void NHAP() {
			cout << "Nhap cac gia tri cua mang: " << endl;
			for(int i = 0; i < this->n; i++) {
				cout << "VALUE[" << i << "] = ";
				cin >> this->VALUE[i];
			}
		}

		void XUAT() {
			cout << "VALUE : ";
			for(int i = 0; i < this->n; i++) {
				cout << this->VALUE[i] << " ";
			}
			cout << endl;
		}
};

int main() {
	int n;
	cout << "n: ";
	cin >> n;
	ARRAY a(n);
	a.XUAT();
	a.NHAP();
	a.XUAT();
	return 0;
}

// Bai 3
class TaiSan {
	private:
    	string tenTaiSan;
    	int soLuong;
    	string tinhTrang;
	public:
		TaiSan() {}

    	TaiSan(string tenTaiSan, int soLuong, string tinhTrang) {
        	this->tenTaiSan = tenTaiSan;
        	this->soLuong = soLuong;
        	this->tinhTrang = tinhTrang;
    	}

    	string getTenTaiSan() {
        	return this->tenTaiSan;
    	}

    	void setTenTaiSan(string tenTaiSan) {
        	this->tenTaiSan = tenTaiSan;
    	}

		int getSoLuong() {
			return this->soLuong;
		}

		void setSoLuong(int soLuong) {
			this->soLuong = soLuong;
		}

		string getTinhTrang() {
			return this->tinhTrang;
		}

		void setTinhTrang(string tinhTrang) {
			this->tinhTrang = tinhTrang;
		}
};

class Phong {
	private:
		string maPhong;
	public:
		Phong() {}
		Phong(string maPhong) {
			this->maPhong = maPhong;
		}

		string getMaPhong() {
			return this->maPhong;
		}

		void setMaPhong(string maPhong) {
			this->maPhong = maPhong;
		}
};

class NhanVien {
	private:
		string tenNhanVien;
		string chucVu;
	public:
		NhanVien() {

		}

		NhanVien(string tenNhanVien, string chucVu) {
			this->tenNhanVien = tenNhanVien;
			this->chucVu = chucVu;
		}

		string getTenNhanVien() {
			return this->tenNhanVien;
		}

		void setTenNhanVien(string tenNhanVien) {
			this->tenNhanVien = tenNhanVien;
		}

		string getChucVu() {
			return this->chucVu;
		}

		void setChucVu(string chucVu) {
			this->chucVu = chucVu;
		}
};

class PhieuKiemKe {
	private:
		string maPhieu;
		string ngayKiemKe;
		NhanVien nhanVienKiemKe;
		Phong phongKiemKe;
		vector<TaiSan> danhSachTaiSan;
	public:
		PhieuKiemKe() {}

		PhieuKiemKe(string maPhieu, string ngayKiemKe, NhanVien nhanVienKiemKe, Phong phongKiemKe, vector<TaiSan> danhSachTaiSan) {
			this->maPhieu = maPhieu;
			this->ngayKiemKe = ngayKiemKe;
			this->nhanVienKiemKe = nhanVienKiemKe;
			this->phongKiemKe = phongKiemKe;
			this->danhSachTaiSan = danhSachTaiSan;
		}

		string getMaPhieu() {
			return this->maPhieu;
		}

		void setMaPhieu(string maPhieu) {
			this->maPhieu = maPhieu;
		}

		string getNgayKiemKe() {
			return this->ngayKiemKe;
		}

		void setNgayKiemKe(string ngayKiemKe) {
			this->ngayKiemKe = ngayKiemKe;
		}
		NhanVien getNhanVienKiemKe() {
		return this->nhanVienKiemKe;
		}

		void setNhanVienKiemKe(NhanVien nhanVienKiemKe) {
			this->nhanVienKiemKe = nhanVienKiemKe;
		}

		Phong getPhongKiemKe() {
			return this->phongKiemKe;
		}

		void setPhongKiemKe(Phong phongKiemKe) {
			this->phongKiemKe = phongKiemKe;
		}

		vector<TaiSan> getDanhSachTaiSan() {
			return this->danhSachTaiSan;
		}

		void setDanhSachTaiSan(vector<TaiSan> danhSachTaiSan) {
			this->danhSachTaiSan = danhSachTaiSan;
		}

		void themTaiSan(TaiSan taiSan) {
			this->danhSachTaiSan.push_back(taiSan);
		}

		void xoaTaiSan(int index) {
			this->danhSachTaiSan.erase(danhSachTaiSan.begin() + index);
		}

		int tinhTongSoTaiSanDaKiemKe() {
			return this->danhSachTaiSan.size();
		}

		int tinhTongSoLuong() {
			int res = 0;
			for(TaiSan value : this->danhSachTaiSan) {
				res += value.getSoLuong();
			}
			return res;
		}
 
		void inPhieuKiemKe() {
			cout << "Ma phieu: " << this->maPhieu << endl;
			cout << "Ngay kiem ke: " << this->ngayKiemKe << endl;
			cout << "Nhan vien kiem ke: " << this->nhanVienKiemKe.getTenNhanVien() << endl;
			cout << "Chuc vu: " << this->nhanVienKiemKe.getChucVu() << endl;
			cout << "Kiem ke tai phong: " << this->phongKiemKe.getMaPhong() << endl;
			cout << "Danh sach tai san: " << endl;
			for (int i = 0; i < this->danhSachTaiSan.size(); i++) {
				TaiSan taiSan = danhSachTaiSan[i];
				cout << i + 1 << ". Ten tai san: " << taiSan.getTenTaiSan() << ", So luong: " << taiSan.getSoLuong() << ", Tinh trang: " << taiSan.getTinhTrang() << endl;
			}
			cout << "So tai san da kiem ke: " << this->tinhTongSoTaiSanDaKiemKe() << endl;
			cout << "Tong so luong: " << this->tinhTongSoLuong() << endl;
		}
};
















