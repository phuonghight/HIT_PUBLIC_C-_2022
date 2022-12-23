#include <iostream>

using namespace std;

int main()
{
    // Nhap N
    int N ;
    cin >> N;

    // Khởi tạo hai giá trị đầu tiên trong dãy Fibonacci
    long long a = 0;
    long long b = 1;

    // In 2 gia tri dau tien
    cout << a << " " << b << " ";

    // Lặp qua các giá trị còn lại, cập nhật a và b
    // và in chúng mỗi lần
    for (int i = 2; i < N; i++)
    {
        long long c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}

