#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string s;
	cin >> s;
	//s1=s;
	cout<<s;
	long long int l=s.length();
	for(int i=l-1;i>=0;i--)
	cout<<s[i];
	return 0;
}