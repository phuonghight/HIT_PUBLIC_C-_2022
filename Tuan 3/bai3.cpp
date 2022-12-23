#include <iostream>

using namespace std;

int main() {
  // Đọc trong một giá trị cho N
  int N;
  cin >> N;

  // Tiếp tục đọc các giá trị cho N cho đến khi điều kiện được đáp ứng
  while (N <= 0 || N % 2 == 0) {
    cout << "Vui long nhap so duong, so le: ";
    cin >> N;
  }

  // Khi điều kiện được thỏa mãn, in ra số
  cout << "So ban nhap la: " << N << endl;

  return 0;
}

