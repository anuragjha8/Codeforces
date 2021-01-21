#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int n,k,c=0;
	cin >>n>>k;
	int a[n];
	int f[1001]={};
	for(int i=0;i<n;i++){
		cin >>a[i];
		f[a[i]]++;
	}
	for(int i=1;i<1001;i++){
		if(f[i]%2==1)
		c++;
	}
	cout<<n-(c/2);
	return 0;
}