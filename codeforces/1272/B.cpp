#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >>s;
		int l=0,r=0,u=0,d=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='L')
			l++;
			if(s[i]=='R')
			r++;
			if(s[i]=='U')
			u++;
			if(s[i]=='D')
			d++;
		}
		r=min(l,r);
		u=min(u,d);
		if(u==0 && r!=0)
		r=1;
		if(r==0 && u!=0)
		u=1;
		l=r+r+u+u;
		cout<<l<<endl;
		for(int i=0;i<r;i++)
		cout<<"L";
		for(int i=0;i<u;i++)
		cout<<"U";
		for(int i=0;i<r;i++)
		cout<<"R";
		for(int i=0;i<u;i++)
		cout<<"D";
		cout<<endl;
	}
	return 0;
}