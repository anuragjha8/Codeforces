#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int l,r,q=0,c=0;
	cin >>l;
	string s,s1="";
	int m=0;
	cin >>s;
	int a[10];
	for(int i=1;i<10;i++)
	cin >>a[i];
	for(int i=0;i<l;i++){
		if(a[s[i]-'0']>(s[i]-'0') && q==0)
		q=1;
		if(a[s[i]-'0']<(s[i]-'0') && q==1)
		q=100;
		if(q==1)
			s1+=to_string(a[s[i]-'0']);
		else
			s1+=to_string(s[i]-'0');
	}
	cout<<s1;
	return 0;
}