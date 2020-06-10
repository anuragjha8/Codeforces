#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,m=0,c=0;
	cin >> n;
	string s,s1="AB",s2="";
	cin >> s;
	for(int j=1;j<n;j++){
	s1=s[j-1];
	s1=s1+s[j];
	for(int i=0;i<n-1;i++){
		if(s.substr(i,2)==s1)
		c++;
		if(c>m){
			m=c;
			s2=s1;
		}}
		c=0;
	}
	cout<<s2;
	return 0;
}