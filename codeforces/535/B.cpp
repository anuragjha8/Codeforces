#include <bits/stdc++.h>
using namespace std;

/*bool comp(string a,string b){
	if(a.size()==b.size())
	return a<b;
	return a.size()<b.size();
}*/
long long int n=0,q=0;
int main() {
	string s,s1="";
	cin >> s;
	int l=s.length();
	for(int i=0;i<l;i++){
	if(s[i]=='4')
	s1+='0';
	if(s[i]=='7')
	s1+='1';}
	for(int i=0;i<l;i++){
		if(s1[i]=='1')
		n=n+(pow(2,(l-i-1)));
	}
	q=n-1+pow(2,l);
	cout<<q;
	return 0;
}