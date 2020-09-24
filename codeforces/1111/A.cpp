#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,s1;
	cin >> s>>s1;
	int l,l1,v1=0,c1=0,v=0,c=0;
	l=s.length();
	l1=s1.length();
	if(l!=l1)
	cout<<"NO";
	else{
	for(int i=0;i<l;i++){
		if((s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')&&(s1[i]!='a' && s1[i]!='e' && s1[i]!='i' && s1[i]!='o' && s1[i]!='u'))
		v=1;
		if((s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')&&(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u'))
		v=1;
	}
	if(v==0)
	cout<<"YES\n";
	else
	cout<<"NO\n";}
	return 0;
}