#include <iostream>

using namespace std;

int main()
{
	// ngay thang nam > 0, ngay<= 31, thang <=12
	// thang co 31 ngay khong co thang :2 4 6 9 11
	// thang 2: + nhap ngay 29: kiem tra nam nhuan
	int ngay, thang, nam;
	cin >> ngay >> thang >> nam;
	int ngay2 = ngay, thang2 = thang, nam2 = nam;
	if(ngay <= 0 || thang <= 0 || nam <= 0 || ngay > 31 || thang > 12)	
		cout << "Du lieu k hop le";
	else if((thang == 2 || thang == 4 || thang == 6 || thang == 9 || thang == 11) && ngay > 30)
		cout << "Du lieu k hop le";
	else if(thang == 2 && ngay == 29 && !((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0))
		cout << "Du lieu k hop le";
	else 
	{
		//mai
		int ct;
		if(thang == 4 || thang == 6 || thang == 9 || thang == 11)
			ct = 30;
		else if(thang == 2)
			ct = 28 + ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0);
			//true->1
			//false->0
		else
			ct = 31;
		
		(ngay %= ct)++;	//->ngay = (ngay % ct) + 1
		// ngay binh thuong: ngay % ct = ngay (6%31=6)
		// ngay cuoi thang: ngay % ct = 0 (ngay=ct)
		if(ngay == 1)
		{
			(thang %= 12)++;
			if(thang == 1)
				nam++;
		}
		cout << ngay << "/"<<thang<<"/"<<nam<<endl;
		//hqua
		if(ngay2 == 1) //ngay dau thang
		{
			if(thang2 == 1)
			{
				thang2 = 12;
				nam2--;
			} 
			else
				thang2--;
				
			if(thang2 == 4 || thang2 == 6 || thang2 == 9 || thang2 == 11)
				ngay2 = 30;
			else if(thang2 == 2)
				ngay2 = 28 + ((nam2 % 4 == 0 && nam2 % 100 != 0) || nam2 % 400 == 0);
			else
				ngay2 = 31;
		} 
		else // ngay binh thuong
			ngay2--;
		cout << ngay2 << "/" <<thang2 << "/"<<nam2<<endl;					
	}
	return 0;
}
