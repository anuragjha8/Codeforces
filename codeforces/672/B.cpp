#include <bits/stdc++.h>
using namespace std;

int main() {
	int l,n=0,a=0;
	cin >> l;
	set<char>q;
	string s;
	cin >> s;
	int f[26]={};
	for(int i=0;i<l;i++){
		q.insert(s[i]);
		f[s[i]-'a']++;
	}
	n=q.size();
	for(int i=0;i<26;i++){
		if(f[i]>1)
		a+=(f[i]-1);
	}
	if(a+n>26)
	cout<<"-1";
	else
	cout<<a;
	return 0;
}