/*
Tạo một con trỏ kiểu số nguyên. Tạo một mảng bằng cách cấp phát cho nó 5 ô nhớ số nguyên.
Tìm địa chỉ của phần tử nhỏ nhất trong mảng đó.
*/

#include <iostream>

using namespace std;

int main() {
    int *arr = new int[5];

    // Xuat gia tri cac phan tu trong mang
    for (int i=0; i<5; i++) {
        cout << *(arr+i) << " ";
    }
    cout << endl;

    // Xuat dia chi cac phan tu trong mang
    for (int i=0; i<5; i++) {
        cout << arr+i << " ";
    }
    cout << endl;

    // Dia chi cua phan tu nho nhat
    int minn = *arr;
    int *DiaChiMin = arr;

    for (int i=1; i<5; i++) {
        if (*(arr+i) < minn) {
            DiaChiMin = arr+i;
            minn = *(arr+i);
        }
    }
    cout << "Dia chi cua phan tu nho nhat: " << DiaChiMin;
    return 0;
}
