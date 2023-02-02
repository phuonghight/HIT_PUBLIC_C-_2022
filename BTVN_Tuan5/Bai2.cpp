#include <iostream>

using namespace std;

int main(){
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	while (s1[s1.length()-1] ==  ' ')
	{
		s1.erase(s1.length()-1, 1);
	}
	while (s1[0] == ' ')
	{
		s1.erase(0, 1);
	}
	while (s2[s2.length()-1] ==  ' ')
	{
		s2.erase(s2.length()-1, 1);
	}
	while (s2[0] == ' ')
	{
		s2.erase(0, 1);
	}
	for (int i=0; i<s1.length(); i++)
	{
		while (s1[i] == ' ' && s1[i+1] == ' ')
		{
			s1.erase(i, 1);
			i--;
		}
		if (s1[i] >= 'A' && s1[i] <= 'Z')
		{
			s1[i] += 32;
		}
	}
	if (s1[s1.length()-1] == ' ')
	{
		s1.erase(s1.length()-1, 1);
	}
	for (int i=0; i<s2.length(); i++)
	{
		while (s2[i] == ' ' && s2[i+1] == ' ')
		{
			s2.erase(i, 1);
			i--;
		}
		if (s2[i] >= 'A' && s2[i] <= 'Z')
		{
			s2[i] += 32;
		}
	}
	if (s2[s2.length()-1] == ' ')
	{
		s2.erase(s2.length()-1, 1);
	}
	cout << s1 << " " << s2 << endl;
	cout << s1.length() << " " << s2.length() << endl;
	if (s1 == s2)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}

