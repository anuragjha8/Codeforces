#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int j=0;j<t;j++){
		long long int n,d1=0,d2=0,z=1;
		cin >>n;
		int x[n],y[n];
		cin>>x[0]>>y[0];
		if(y[0]>x[0])
		z=0;
		for(int i=1;i<n;i++){
			cin >> x[i]>>y[i];
			d1=x[i]-x[i-1];
			d2=y[i]-y[i-1];
			if(d1<0 || d2<0 || d2>d1)
			z=0;
		}
		if(z==1)
		cout<<"YES\n";
		if(z==0)
		cout<<"NO\n";
	}
	return 0;
}