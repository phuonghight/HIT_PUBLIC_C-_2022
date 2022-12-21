#include<iostream>
using namespace std;

int main()
{
   int thang;
   cin>>thang;
   switch(thang){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        {
            cout<<"day la thang co 31 ngay";
            break;
        }
    case 2:
        {
            cout<<"co the co 28 hoac 29 ngay";
            break;
        }
    case 4:
    case 6:
    case 9:
    case 11:
        {
            cout<<"thang nay co 30 ngay";
        }
    default:
        {
            cout<<"khong co thang tu 1-12";
        }
   }

}
