#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c;
    float x,x1,x2,delta;
    cout<<"Nhap so a,b,c ";
    cin>>a>>b>>c;
    delta=pow(b,2)-(4*a*c);
    //neu a=0
    if(a==0){
        cout<<"Day khong phai phuong trinh bac 2";
    }
    //neu a khac 0
    else{
            //TH1 : delta>0
        if(delta>0){
            x=(-b+sqrt(delta))/2*a;
            x1=(-b-sqrt(delta))/2*a;
            cout<<"Phuong trinh co 2 nghiem phan biet \n";
            cout<<"x1="<<x<<"\n x2="<<x1;
        }
    //TH2:delta=0
        else if(delta==0){
            x2=-b/2*a;
            cout<<"Phuong trinh co nghiem kep x="<<x2;
        }
        //TH3:delta<0
        else{
            cout<<"Phuong trinh vo nghiem";
        }
    }
   // bien luan phuong trinh bac 2: a*x^2 + bx + c = 0
    // delta = b^2 - 4*a*c
    // delta > 0 x1= = -b+sqrt(delta)/2a && x2=-b-sqrt(delta)/2a
    // delta = 0 x1=x2=-b/2a
    // delta < 0 vo nghiem

}
