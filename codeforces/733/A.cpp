#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int l=s.length();
	int z=0,d=0,m=0,c=0;
	vector<int>v;
	v.push_back(0);
	for(int i=0;i<l;i++){
		if(s[i]=='A' || s[i]=='E' ||s[i]=='I' || s[i]=='O'|| s[i]=='U' || s[i]=='Y' ){
		z=i;
		c=1;
		break;}}
		m=z+1;
	for(int i=z+1;i<l;i++){
		if(s[i]=='A' || s[i]=='E' ||s[i]=='I' || s[i]=='O'|| s[i]=='U' || s[i]=='Y' ){
		d=i-z;
		if(d>m)
		m=d;
		z=i;
		}}

	m=max(m,(l-z));
		/*if(l==1 && s[0]!='A' && s[0]!='E' && s[0]!='I' && s[0]!='O'&& s[0]!='U' && s[0]!='Y' )
	m=2;*/
	if(c==0)
	m=l+1;
	cout<<m;
	return 0;
}