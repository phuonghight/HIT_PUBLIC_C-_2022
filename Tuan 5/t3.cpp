#include <iostream>

using namespace std;

int main()
{
    // Cho chuỗi s từ bàn phím, biến đổi chữ hoa trong chuỗi thành chữ thường, và thường thành hoa
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    cout << s << endl;
    cout << (int)s[0];
    cout << s[0];
    return 0;
}
