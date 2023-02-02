#include <iostream>
#include <sstream>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	int cnt = (s[0] != ' ');
	for (int i=0; i<s.length()-1; i++)
	{
		if (s[i] == ' ' && s[i+1] != ' ')
		{
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
 
