#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int k,l,l1,q=0,c=0;
	cin >>k;
	string s,s1="";
	cin >> s;
	l=s.length();
	int f[26]={};
	l1=l/k;
	for(int i=0;i<l;i++)
	f[s[i]-'a']++;
	for(int i=0;i<26;i++){
		if(f[i]>0 && f[i]%k!=0)
		c=1;
	}
	if(c==1)
	cout<<"-1";
	else{
		for(int i=0;i<26;i++){
			q=f[i]/k;
			while(q--){
				s1+=(char)(i+97);
			}
		}
		while(k--)
		cout<<s1;
	}
	return 0;
}
