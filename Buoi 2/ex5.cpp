#include<iostream>
using namespace std;

int main()
{
    float n;
    cin>>n;
    if (n<=50)
    {
        cout<<"Tong tien dien la: "<<50*1.678<<endl;
    }
    else if (n<=100)
    {
        cout<<"Tong tien dien la: "<<50*1.678 + (n-50)*1.734<<endl;
    }
    else if (n<=200)
    {
        cout<<"Tong tien dien la: "<<50*1.678 + 50*1.734 + (n-100)*2.014<<endl;
    }
    else if (n<=300)
    {
        cout<<"Tong tien dien la: "<<50*1.678 + 50*1.734 + 100*2.014 + (n-200)*2.536<<endl;
    }
    else if (n<=400)
    {
        cout<<"Tong tien dien la: "<<50*1.678 + 50*1.734 + 100*2.014 + 100*2.536 + (n-300)*2.834<<endl;
    }
    else
    {
        cout<<"Tong tien dien la: "<<50*1.678 + 50*1.734 + 100*2.014 + 100*2.536 + 100*2.384 + (n-400)*2.927<<endl;
    }

}
