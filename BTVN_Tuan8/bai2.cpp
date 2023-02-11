#include <bits/stdc++.h>
using namespace std;

struct student
{
    char id[10], name[30], address[30];
    float score;
};

student getData()
{
    student x;
    cout << "Nhap msv: ";                   fflush(stdin);  gets(x.id);
    cout << "Nhap ho va ten: ";             fflush(stdin);  gets(x.name);
    cout << "Nhap que quan: ";              fflush(stdin);  gets(x.address);
    cout << "Nhap diem trung binh mon: ";   cin >> x.score;
    return x;
}

void input(student*& _list, int &n)
{
    do
    {
        cout << "Nhap n nguyen duong nho hon 100: ";    cin >> n;
    } while ((n<=0 || n>=100) && cout << "Nhap lai!!!\n");
    _list = new student[n];
    for(int i=0;i<n;i++)
    {
        cout << "\nNhap thong tin sinh vien\n";
        _list[i] = getData();
    }
}

void output(ofstream& fileout, student* _list, int n)
{
    cout << "\n==============DANH SACH SINH VIEN==============\n";
    cout<<left<<setw(5)<<"\nSTT"<<setw(10)<<"MSV"<<setw(30)<<"Ho va ten"<<setw(30)<<"Que quan"<<setw(10)<<"Diem"<<"\n";

    fileout << "\n==============DANH SACH SINH VIEN==============\n";
    fileout<<left<<setw(5)<<"\nSTT"<<setw(10)<<"MSV"<<setw(30)<<"Ho va ten"<<setw(30)<<"Que quan"<<setw(10)<<"Diem"<<"\n";
    for(int i=0; i<n; i++)
    {
        student x = _list[i];
        cout<<left<<setw(5)<<i+1<<setw(10)<<x.id<<setw(30)<<x.name<<setw(30)<<x.address<<setw(10)<<x.score<<"\n";
        fileout<<left<<setw(5)<<i+1<<setw(10)<<x.id<<setw(30)<<x.name<<setw(30)<<x.address<<setw(10)<<x.score<<"\n";
    }
}

void resizeList(student*& _list, int before, int after)
{
    student *tmpArray = new student[after];
	for (int i=0; i<after; i++)
	{
		tmpArray[i] = _list[i];
	}
	delete[] _list;
	_list = tmpArray;
}

void _insert(student*& _list, int &n)
{
    cout << "Nhap thong tin sinh vien moi:\n";
    student x = getData();
    int k;
    do
    {
        cout << "Nhap vi tri: "; cin >> k;
    }
    while (!(k>0 && k<=n) && cout << "Nhap lai!!!\n");
    n++;
    resizeList(_list, n-1, n);
    for(int i=n-1;i>=k;i--)
    {
        _list[i] = _list[i-1];
    }
    _list[k-1] = x;
}

int _find(student* _list, int n, char msv[])
{
    for(int i=0;i<n;i++)
    {
        if(strcmp(_list[i].id, msv) == 0)
            return i;
    }
    return -1;
}

void _eraser(student*& _list, int &n)
{
    char msv[10];
    cout << "Nhap msv can xoa: ";
    fflush(stdin);  gets(msv);
    int k = _find(_list, n, msv);

    if(k==-1)
    {
        cout << "Khong ton tai sinh vien!!!\n";
        return;
    }
    else
    {
        for(int i=k;i<n-1;i++)
        {
            _list[i] = _list[i+1];
        }
        resizeList(_list, n, n-1);
        n--;
        cout << "\nXoa thanh cong\n";
    }
}

void _sort(student*& _list, int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(_list[i].score > _list[j].score)
            {
                student temp = _list[i];
                _list[i] = _list[j];
                _list[j] = temp;
            }
        }
    }
}

void menu()
{
    ofstream fileout("SINHVIEN.txt");
    int n=0;
    student *_list;

    while(1)
    {
        system("cls");
        cout << "----------------------------------------------------------------" << endl;
        cout << "1. Nhap danh sach sinh vien" << endl;
        cout << "2. Xuat danh sach sih vien" << endl;
        cout << "3. Them sinh vien" << endl;
        cout << "4. Xoa sinh vien" << endl;
        cout << "5. Sap xep danh sach" << endl;
        cout << "6. Tim kiem" << endl;
        cout << "0. Ket thuc" << endl;
        cout << "----------------------------------------------------------------" << endl;

        int choice;
        do
        {
            cout << "Nhap lua chon: ";  cin>>choice;
        } while((choice<0 || choice>6) && cout << "Nhap chinh xac!!!\n");

        if(choice==1)
        {
            input(_list, n);
        }
        else if(choice==2)
        {
            if(n!=0) output(fileout, _list, n);
            else cout << "Danh sach trong!!!\n";
			system("pause");
        }
        else if(choice == 3)
        {
            if(n!=0)
            {
                _insert(_list, n);
                cout << "\nThem thanh cong\n";
            } else cout << "Danh sach trong!!!\n";
			system("pause");
        }
        else if(choice == 4)
        {
            if(n!=0)
            {
                _eraser(_list, n);
            } else cout << "Danh sach trong!!!\n";
			system("pause");
        }
        else if(choice == 5)
        {
            if(n!=0)
            {
                _sort(_list, n);
                fileout << "\nDanh sach sau khi sap xep la\n";
                output(fileout, _list, n);
            } else cout << "Danh sach trong!!!\n";
			system("pause");
        }
        else if(choice == 6)
        {
            if(n!=0)
            {
                char msv[10];
                cout << "Nhap msv can tim kiem: ";
                fflush(stdin);  gets(msv);
                int k = _find(_list, n, msv);

                if(k==-1)
                {
                    cout << "Sinh vien khong ton tai!!!\n";
                }
                else
                {
                    cout << "\nSinh vien can tim la\n";
                    cout<<left<<setw(5)<<"\nSTT"<<setw(10)<<"MSV"<<setw(30)<<"Ho va ten"<<setw(30)<<"Que quan"<<setw(10)<<"Diem"<<"\n";
                    student x = _list[k];
                    cout<<left<<setw(5)<<k+1<<setw(10)<<x.id<<setw(30)<<x.name<<setw(30)<<x.address<<setw(10)<<x.score<<"\n";
                }
            } else cout << "Danh sach trong!!!\n";
			system("pause");
        }
        else
        {
            cout << "\n========= THANK YOU =========\n";
			break;
        }
    }
    delete[] _list;
}
int main()
{
    menu();
    return 0;
}
