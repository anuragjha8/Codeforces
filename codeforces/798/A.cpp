#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int l=s.length(),c=0;
	for(int i=(l/2)-1;i>=0;i--){
		if(s[i]!=s[l-i-1])
		c++;
	}
	if(c==0 && l%2==1)
	c=1;
	if(c==1)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}