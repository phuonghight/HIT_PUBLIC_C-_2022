#include <iostream>
#include <fstream>
using namespace std;
struct triangle
{
    float a,b,c;
};

triangle getData(ifstream& filein)
{
    triangle tg;
    filein >> tg.a;
    filein >> tg.b;
    filein >> tg.c;
    return tg;
}

void writeToScreen(triangle x)
{
    cout << x.a << " " << x.b << " " << x.c;
}

void writeToFile(ostream &fileout,triangle x)
{
    fileout << x.a << " " << x.b << " " << x.c;
}

void check(ofstream &fileout, triangle x)
{
    float a=x.a, b=x.b, c=x.c;
    if( a<b+c && b<a+c && c<a+b )
    {
        if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
        {
            cout<<" tam giac vuong\n";
            fileout<<" tam giac vuong\n";
        }
        else if(a==b && b==c)
        {
            cout<<" tam giac deu\n";
            fileout<<" tam giac deu\n";
        }
        else if(a==b || a==c || b==c)
        {
            cout<<" tam giac can\n";
            fileout<<" tam giac can\n";
        }
        //điều kiện tam giác tù là có một góc lơn hơn 90 độ
        else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b)
        {
            cout<<" tam giac tu\n";
            fileout<<" tam giac tu\n";
        }
        //và trường hợp còn lại là tam giác nhọn
        else
        {
            cout<<" tam giac nhon\n";
            fileout<<" tam giac nhon\n";
        }
    }
    else
    {
        cout<<" khong phai tam giac\n";
        fileout<<" khong phai tam giac\n";
    }
}

int main()
{
    int n;
    ifstream filein("input.txt");
    ofstream fileout("ouput.txt");
    filein >> n;
    for(int i=0; i<n; i++)
    {
        triangle x = getData(filein);
        writeToScreen(x);
        writeToFile(fileout, x);
        check(fileout, x);
    }
    return 0;
}
