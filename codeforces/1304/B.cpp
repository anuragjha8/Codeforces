#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,l,q=0;
	cin >> n>> l;
	string s[n],a="",b="";
	int f[n]={};
	for(int i=0;i<n;i++)
	cin >> s[i];
	for(int i=0;i<n;i++){
		int q=0;
		string s1=s[i];
		reverse(s1.begin(),s1.end());
		for(int j=i+1;j<n;j++){
			if(s[j]==s1 && f[i]==0 && f[j]==0){
				a=s[j]+a+s[i];
				f[i]=1;
				f[j]=1;
			}}}
			for(int i=0;i<n;i++){
				string s1=s[i];
				reverse(s1.begin(),s1.end());
				int l1=a.length();
			if(s1==s[i] && f[i]==0){
			a=a.substr(0,l1/2)+s1+a.substr(l1/2,l1/2);
			break;}}
	l=a.length();
	cout<<l<<endl<<a;
	return 0;
}