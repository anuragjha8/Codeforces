#include <bits/stdc++.h>
using namespace std;
#define int long long

signed  main() {
	int t=1;
	cin >>t;
	while(t--){
		int n,k,q=0;
		cin >>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin >>a[i];
		sort(a,a+n);
		q=a[0]+a[1];
		if(q<=k || a[n-1]<=k)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}