#include <iostream>

using namespace std;

int main(){
	string s;
	char c;
	getline(cin, s);
	cin >> c;
	int cnt = 0;
	for (int i=0; i<s.length(); i++)
	{
		if (s[i] == c)
		{
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}

