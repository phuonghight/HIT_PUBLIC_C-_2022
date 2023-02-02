#include <iostream>

using namespace std;

int main(){
	string str;
	string deleteString;
	getline(cin, str);
	getline(cin, deleteString);
	int deleteLeng = deleteString.length();
	int deletePos = str.find(deleteString);
	while(deletePos < str.length())
	{
		str.erase(deletePos, deleteLeng);
		deletePos = str.find(deleteString);
	}
	int i = 0;
	while(str[i] == ' ')
	{
		str.erase(i, 1);
	}
	i = str.length();
	while(str[i] == ' ')
	{
		str.erase(i-1, 1);
		i--;
	}
	for(int i=0; i<str.length(); i++)
	{
		while (str[i] == str[i+1] && str[i] == ' ')
		{
			str.erase(i,1);
		}
	}
	cout << str;
	return 0;
}

