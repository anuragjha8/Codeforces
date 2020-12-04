#include <bits/stdc++.h>
using namespace std;

int main() {
		string s;
		cin >> s;
		int l=s.length();
		int x=10*(s[l-2]-'0')+(s[l-1]-'0');
		if(x%4==0)
		cout<<"4";
		else
		cout<<"0";
	return 0;
}