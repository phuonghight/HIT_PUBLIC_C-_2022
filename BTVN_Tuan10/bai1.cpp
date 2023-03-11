#include <iostream>

using namespace std;

class hcn
{
private:
    double d, r;

public:
    void nhap()
    {
        cout << "Chieu dai : ";
        cin >> d;
        cout << "Chieu rong : ";
        cin >> r;
    }

    void ve()
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < d; j++)
                cout << "*";
            cout << endl;
        }
    }

    double chuvi()
    {
        cout << "Chu vi = " << 2 * (d + r) << endl;
    }

    double dientich()
    {
        cout << "Dien tich = " << d * r;
    }
};

int main()
{
    hcn x;
    x.nhap();
    x.ve();
    x.chuvi();
    x.dientich();
}