#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,r=0,m=0,p=0;
	cin >> n;
	string s="",s1="";
	while(n>0){
		r=n%10;
		if(r>=5)
		r=9-r;
		s1=to_string(r);
		s=s+s1;
		n=n/10;
	}
	/*if(n>=5)
		n=9-n;
		if(n==0)
		n=9;
		m=(m*10) + n;
	while(m>0){
		r=m%10;
		p=p*10 + r;
		m=m/10;
	}*/
	int l=s.length();
	if(s[l-1]=='0')
	s[l-1]='9';
	reverse(s.begin(),s.end());
	cout<<s;
	return 0;
}