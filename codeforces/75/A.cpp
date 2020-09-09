#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,s1,s2="",s3="",s4="",s5="";
	cin >>s>>s1;
	int a=stoi(s);
	int b=stoi(s1);
	
	int c=a+b,d=0,e=0;
	s4=to_string(c);
	//cout<<a<<" "<<b<<" "<<c<<endl;
	for(int i=0;i<s.length();i++){
		if(s[i]!='0')
		s2+=s[i];
	}
		for(int i=0;i<s1.length();i++){
		if(s1[i]!='0')
		s3+=s1[i];
	}
		for(int i=0;i<s4.length();i++){
		if(s4[i]!='0')
		s5+=s4[i];
		}
	a=stoi(s2);
	b=stoi(s3);
	e=stoi(s5);
	d=a+b;
	//cout<<a<<" "<<b<<" "<<d<<endl;
	if(d==e)
	cout<<"YES\n";
	else
	cout<<"NO\n";
	return 0;
}