#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >>t;
	while(t--){
		int n,x=0,y=0,z=0;
		cin >>n;
		string s;
		cin >>s;
		for(int i=0;i<n;i++){
			if(s[i]=='>')
			x++;
			if(s[i]=='<')
			y++;
			if(s[i]=='-')
			z++;
		}
		for(int i=0;i<n;i++){
			if(s[i]!='-' ){
				if(s[(i-1+n)%n]=='-')
				z++;
			}}
		if(x!=0 && y==0)
		z=n;
		if(y!=0 && x==0)
		z=n;
		cout<<z<<endl;
	}
	return 0;
}