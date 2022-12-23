#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    // Đọc trong một giá trị cho N
    int N;
    cin >> N;

    if (N < 2)
    {
        cout << N << " khong phai la so nguyen to." << endl;

        // dừng chương trình
        return 0;
    }

    // Kiểm tra xem N có chia hết cho bất kỳ số nào từ 2 đến sqrt(N)
    for (int i = 2; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            cout << N << " khong phai la so nguyen to." << endl;

            // dừng chương trình
            return 0;
        }
    }

    // Nếu không thỏa mãn điều kiện nào ở trên thì N là số nguyên tố
    cout << N << " la so nguyen to." << endl;
    return 0;
}

