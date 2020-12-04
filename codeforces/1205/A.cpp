#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,c=2;
		cin >> n;
		if(n%2==0)
		cout<<"NO\n";
		else{
			cout<<"YES\n";
		m=2*n;
		int a[m+1];
		a[1]=1;
		int i=n+1;
		while(i<=m){
			a[i]=c;
			if(i+1<=m)
			a[i+1]=c+1;
			i+=2;
			c+=4;
		}
		i=2;
		c=4;
		while(i<=n){
			a[i]=c;
			if(i+1<=m)
			a[i+1]=c+1;
			i+=2;
			c+=4;
		}
		for(int i=1;i<=m;i++)
		cout<<a[i]<<" ";
		}
	return 0;
}