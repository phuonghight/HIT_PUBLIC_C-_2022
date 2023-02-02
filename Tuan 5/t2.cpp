#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Cho chuỗi s từ bàn phím, thay thế các khoảng trắng nếu có thành kí tự "@"
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
            s[i] = '@';
    }
    cout << s << endl;
    return 0;
}