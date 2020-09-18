#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int k,l,m=0;
	l=s.length();
	long long int t=0;
	cin >> k;
	int a[26];
	for(int i=0;i<26;i++){
	cin >> a[i];
	if(a[i]>m)
	m=a[i];}
	for(int i=0;i<l+k;i++){
		if(i<l)
			t=t+((a[(int)s[i]-97])*(i+1));
		else
			t+=(i+1)*m;
	}
	cout<<t;
	return 0;
}
