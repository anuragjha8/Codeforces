#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,o=0,e=0;
	cin >>n;
	int l=n;
	string s;
	cin >> s;
	for(int i=0;i<l;i++){
		if(s[i]=='0')
		e++;
		else
		o++;
	}
	l=o-e;
	if(l<0)
	l=l*-1;
	cout<<l;
	return 0;
}