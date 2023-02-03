#include <iostream>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

float tich(float a, float b) {
    return a * b;
}

void hoandoi(float x, float y) {
    float c=0;
    c = x;
    x = y;
    y = c;

    cout << "\ndia chi cua x: " << &x << " ---- dia chi cua y: " << &y;

    /*a = a+b;
    b = a-b;
    a = a-b;*/
}

int main()
{
    float a, b;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    hoandoi(a, b);
    cout << "\ndia chi cua a: " << &a << " --- dia chi cua b: " << &b;
    cout << "\ngia tri a: " << a << " --- b: " << b;
    return 0;
}
