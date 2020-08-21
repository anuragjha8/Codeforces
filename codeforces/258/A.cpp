#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,s1="";
	cin >> s;
	int l=s.length();
	int c=0;
	for(int i=0;i<l;i++){
		if(s[i]=='0' && c==0)
			c=1;
		else
		s1=s1+s[i];
	}
	if(c==0)
	s1=s.substr(0,l-1);
	cout<<s1<<endl;
	return 0;
}