/*
Nhập một số nguyên N. Tạo một con trỏ và cấp phát động một mảng số nguyên có N phần tử.
Yêu cầu người dùng nhập các phần tử cho mảng và hiển thị mảng vừa nhập

*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int *a = new int[n];

    for(int i = 0; i < n; i++)
        cin >> *(a + i);

    for(int i = 0; i < n; i++)
        cout << *(a + i) << " ";
}
