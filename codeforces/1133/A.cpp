#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,s1;
	int h1,h2,m1,m2,h3=0,m3=0,t=0;
	cin >> s>>s1;
	h1=(s[0]-'0')*10 + (s[1]-'0');
	m1=(s[3]-'0')*10 + (s[4]-'0');
	h2=(s1[0]-'0')*10 + (s1[1]-'0');
	m2=(s1[3]-'0')*10 + (s1[4]-'0');
	
	t=((h2-h1)*60) + m2-m1;
	t=t/2;
	t+=h1*60  + m1;
	if(t/60 < 10)
	cout<<"0"<<t/60<<":";
	else
	cout<<t/60<<":";
	if(t%60 < 10)
	cout<<"0"<<t%60;
	else
	cout<<t%60;
	
	return 0;
}