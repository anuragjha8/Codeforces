#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--){
		int r=0,p=0,x=0,m=0;
		string s,s1="";
		cin >>s;
		for(int i=0;i<s.length();i++){
			if(s[i]=='R')
			r++;
			if(s[i]=='P')
			p++;
			if(s[i]=='S')
			x++;
		}
		m=max({r,p,x});
		if(m==r){
			for(int i=0;i<s.length();i++)
			cout<<"P";
		}
		else if(m==p){
			for(int i=0;i<s.length();i++)
			cout<<"S";
		}
		else if(m==x){
			for(int i=0;i<s.length();i++)
			cout<<"R";
		}
		cout<<endl;
	}
	return 0;
}