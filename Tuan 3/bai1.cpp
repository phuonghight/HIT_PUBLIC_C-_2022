#include <iostream>

using namespace std;

int main() {
    // Đọc trong một giá trị cho N
    int N;
    cin >> N;

    // khởi tạo tổng
    int sum = 0;

    // Cộng i vào cho tổng
    for(int i = 1; i <= N; i++)
        sum += i;

    cout << "Tong cac so tu 1 den " << N << " = " << sum;

  return 0;
}
