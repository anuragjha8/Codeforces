#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,m=0,t=0;
	cin >> n;
	int a[n],b[n],f[2360]={};
	for(int i=0;i<n;i++){
		cin >> a[i]>>b[i];
		t=(100*a[i])+b[i];
		f[t]++;}
	for(int i=0;i<2360;i++){
		if(f[i]>m)
		m=f[i];
	}
	cout<<m;	
	return 0;
}