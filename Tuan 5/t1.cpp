#include <iostream>
#include <string>

using namespace std;

int main()
{
    // in ra chuỗi đảo ngược
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[s.length() - i - 1] << endl;
    }
    return 0;
}
