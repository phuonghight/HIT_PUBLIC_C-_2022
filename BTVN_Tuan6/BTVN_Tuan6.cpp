#include <bits/stdc++.h>
using namespace std;

//a
void Nhap(int a[], int &n){
    cout<<"Nhap n: "; cin>>n;
    cout<<"Nhap mang: ";
    for(int i=0; i<n; i++)
        cin>>a[i];

}

//b
void Xuat(int a[], int n){
    cout<<"Cac phan tu cua mang: ";
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

//c
int DemSoNguyenDuong(int a[], int n){
    int cnt=0;
    for(int i=0; i<n; i++){
        if (a[i]>0) cnt++;
    }
    return cnt;
}

//d
float TBC(int a[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=a[i];
    }
    return 1.0*sum/n;
}

//e
//So lon nhat
int SLN(int a[], int n){
    int maxx=a[0];
    for(int i=1; i<n; i++){
        if (a[i] > maxx) maxx=a[i];
    }
    return maxx;
}

//So be nhat
int SBN(int a[], int n){
    int minn=a[0];
    for(int i=1; i<n; i++){
        if (a[i] < minn) minn=a[i];
    }
    return minn;
}

//f

bool KiemTraSNT(int x){
    if (x <= 1) {
        return false;
    }
    else{
        if (x==2 || x==3){
            return true;
        }
        else{
            for(int i=2; i <= sqrt(x) ; i++){
                if (x%i==0){
                    return false;
                }
            }
        }
    }
    return true;
}

void SNT(int a[], int n){
    cout<<"So nguyen to trong mang: ";
    int cnt=0;
    for( int i=2; i<n; i++){
        if( KiemTraSNT(a[i]) ){
            cout<<a[i]<<" ";
            cnt++;
        }
    }
    if (cnt==0) cout<<"Mang khong co SNT";
    cout<<endl;
}

//g
void XoaPT2(int a[], int &n){
    for(int i=1; i<n-1; i++){
        a[i]=a[i+1];
    }
    n--;
}

int main(){
    int a[100000], n, t;
    bool check=true;
    while(check){
        cout<<"\n----------MENU----------"<<endl;
        cout<<"Nhap 1 so de thuc hien chuc nang"<<endl;
        cout<<"Nhap 0: Thoat chuong trinh"<<endl;
        cout<<"Nhap 1: Nhap n va mang n phan tu"<<endl;
        cout<<"Nhap 2: In cac phan tu trong mang"<<endl;
        cout<<"Nhap 3: In ra so luong so nguyen duong trong mang"<<endl;
        cout<<"Nhap 4: Tinh trung binh cong cua mang"<<endl;
        cout<<"Nhap 5: In ra so lon nhat va be nhat trong mang"<<endl;
        cout<<"Nhap 6: In ra cac so nguyen to trong mang"<<endl;
        cout<<"Nhap 7: Xoa phan tu thu 2 trong mang"<<endl;
        do{
            cin>>t;
        } while(t<0 || t>7);

        switch (t)
        {
            case 0:
                check=false;
                break;
            case 1:
                Nhap(a,n);
                break;
            case 2:
                Xuat(a,n);
                break;
            case 3:
                cout<<"So luong so nguyen duong cua mang la: "<<DemSoNguyenDuong(a,n)<<endl;
                break;
            case 4:
                cout<<"Trung binh cong cua mang: "<<TBC(a,n)<<endl;
                break;
            case 5:
                cout<<"So lon nhat cua mang: "<<SLN(a,n)<<endl;
                cout<<"So be nhat cua mang: "<<SBN(a,n)<<endl;
                break;
            case 6:
                SNT(a,n);
                break;
            case 7:
                XoaPT2(a,n);
                Xuat(a,n);
                break;
        }

    }
}
