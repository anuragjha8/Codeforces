#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
		int n,x=0,y=0;
		cin >>n;
		long long int a[n+1],b[n+1]={},m=0;
		long long int s[n+1]={};
		for(int i=1;i<=n;i++){
		cin >> a[i];
		b[i]=i+a[i];}
		for(int i=n;i>=1;i--){
				if(b[i]<=n)
				s[i]=a[i]+s[i+a[i]];
				else
				s[i]=a[i];
			}
		for(int i=1;i<=n;i++)
		m=max(m,s[i]);
		cout<<m<<endl;
	}
	return 0;
}