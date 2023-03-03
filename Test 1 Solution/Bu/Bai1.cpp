#include<bits/stdc++.h>

using namespace std;

int main()
{
    float s = 0;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        s += sqrt(i)/i;
    }
    cout << s << endl;
    return 0;
}