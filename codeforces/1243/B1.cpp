#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		char q;
		int l,c=0,x=-1,y=-1;
		cin >> l;
		string s,s1;
		cin >> s>>s1;
		for(int i=0;i<l;i++){
			if(s[i]!=s1[i]){
			c++;
			if(c==1)
			x=i;
			if(c==2)
			y=i;}
		}
		//cout<<x<<y<<" ";
		//if(c==2 && s[x]==s1[y] && s[y]==s1[x])
		if(c==2){
		q=s[x];
		s[x]=s1[y];
		s1[y]=q;
		if(s==s1)
		cout<<"Yes\n";
		else
		cout<<"No\n";
		}
		else
		cout<<"No\n";
	}
	return 0;
}