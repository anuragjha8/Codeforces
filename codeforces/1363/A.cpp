#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int j=0;j<t;j++){
		long long int n,x,o=0,e=0,z=1;
		cin >>n>>x;
		int a[n];
		for(int i=0;i<n;i++){
		cin >> a[i];
		if(a[i]%2==0)
		e++;
		else
		o++;}
		if(x==n){
			if(o%2==0)
			z=0;
		}
		if(o==0)
		z=0;
		if(e==0 && x %2==0)
		z=0;
		if(z==0)
		cout<<"No\n";
		if(z==1)
		cout<<"Yes\n";
	}
	return 0;
}