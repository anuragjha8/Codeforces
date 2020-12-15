#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	int n,k,q=0;
	cin >>n>>k;
	string s;
	cin >> s;
	for(int i=0;i<k;i++){
		int x=0,y=0,z=0;
		for(int j=i;j<n;j+=k){
			if(s[j]=='1')
			x++;
			else if(s[j]=='0')
			y++;
			else
			z++;
		}
		if((x>0 && y!=0)||(y>0 && x!=0)){
			q=1;
			break;}
		if(x>0 && y==0)
		s[i]='1';
		if(y>0 && x==0)
		s[i]='0';
	}
		int x=0,y=0,z=0;
		for(int i=0;i<k;i++){
			if(s[i]=='1')
			x++;
			else if(s[i]=='0')
			y++;
			else
			z++;
		}
		if(x>k/2 || y>k/2)
		q=1;
		if(q==1)
		cout<<"NO\n";
		else
		cout<<"YES\n";
	}
	return 0;
}