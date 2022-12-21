#include<iostream>

using namespace std;

int main() 
{
	int n, m, k;
	cin >> n >> m >> k;
	int tongTuiQua = m * k;
	if(tongTuiQua % n == 0) 
	{
		cout <<"Chia duoc qua"<<endl;
		int soTuiQuaMoiBan = tongTuiQua / n;
		cout << "Moi ban nhan duoc so tui la: "<<soTuiQuaMoiBan;
	}
	else
		cout << "Khong chia duoc";
	return 0;
}
