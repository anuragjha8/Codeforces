#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=1;
	//cin >> t;
	while(t--){
		long long int n,m,t,c=0,q=0,x=0;
		cin >>n>>m>>t;
		int a[m],b[m];
		for(int i=0;i<m;i++)
		cin >> a[i]>>b[i];
		c=n;
		for(int i=0;i<m;i++){
			c-=(a[i]-x);
			if(c<=0)
			q=1;
			c+=(b[i]-a[i]);
			x=b[i];
			if(c>n)
			c=n;
		}
		c-=(t-x);
		if(c<=0)
		q=1;
		if(q==1)
		cout<<"No\n";
		else
		cout<<"Yes\n";
	}
	return 0;
}