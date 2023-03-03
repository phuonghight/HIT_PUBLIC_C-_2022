#include<bits/stdc++.h>

using namespace std;

bool check(string s) {
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	for(int i = 0;i <= s.length()/2;i++) {
		if(s[i] != s[s.length() - i - 1]) {
			return false;
		}
	}
	return true;
}

int main() {
	string s;
	cin >> s;
	if(check(s)) {
		cout << "YES";
	}
	else {
		cout << "No";
	}
	return 0;
}