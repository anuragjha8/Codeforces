#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n,mx=0,mi=1e9,m=0,d=0,x=0;
		cin >> n;
		int a[n]={};
		for(int i=0;i<n;i++)
		cin >> a[i];
		for(int i=0;i<n;i++){
			if(a[i]==-1 && i==0){
				mx=max(mx,a[1]);
				if(a[1]!=-1)
				mi=min(mi,a[1]);}
			else if(a[i]==-1 && i==n-1){
				mx=max(mx,a[n-2]);
				if(a[n-2]!=-1)
				mi=min(mi,a[n-2]);}
			else if(a[i]==-1){
				mx=max(mx,a[i+1]);
				if(a[i+1]!=-1)
				mi=min(mi,a[i+1]);
				mx=max(mx,a[i-1]);
				if(a[i-1]!=-1)
				mi=min(mi,a[i-1]);}
			}
		x=(mx+mi)/2;
		for(int i=0;i<n;i++){
			if(a[i]==-1)
			a[i]=abs(x);
		}
		for(int i=1;i<n;i++){
			d=abs(a[i]-a[i-1]);
			m=max(m,d);}
		cout<<m<<" "<<x<<endl;
	}
	return 0;
}