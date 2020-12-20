#include <bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin >>t;
	while(t--){
		int n,r,p,s,x=0,y=0,z=0,ans=0;
		cin >>n;
		cin >>r>>p>>s;
		string a,s1(n,'a');
		cin >> a;
		for(int i=0;i<n;i++){
			if(a[i]=='R')
			x++;
			if(a[i]=='P')
			y++;
			if(a[i]=='S')
			z++;
		}
		x=min(x,p);
		y=min(y,s);
		z=min(z,r);
		ans=x+y+z;
		if(2*ans>=n){
			cout<<"YES\n";
			for(int i=0;i<n;i++){
				if(a[i]=='R' && x>0){
					s1[i]='P';
					p--;
					x--;}
				else if(a[i]=='P' && y>0){
					s1[i]='S';
					s--;
					y--;}
				else if(a[i]=='S' && z>0){
					s1[i]='R';
					r--;
					z--;}
			}
			for(int i=0;i<n;i++){
				if(s1[i]=='a'){
					if(r>0){
						s1[i]='R';
						r--;}
					else if(p>0){
						s1[i]='P';
						p--;}
					else if(s>0){
						s1[i]='S';
						s--;}
				}
			}
			cout<<s1<<endl;}
		else 
		cout<<"NO\n";
		}
	return 0;
}