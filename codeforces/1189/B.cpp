#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int n,q=0;
	cin >>n;
	int a[n]={};
	for(int i=0;i<n;i++)
	cin >>a[i];
	sort(a,a+n);
	if(a[n-1]<a[0]+a[n-2])
	q=1;
	else if(a[n-1]<a[n-3]+a[n-2]){
	int z=a[n-1];
	a[n-1]=a[n-2];
	a[n-2]=z;
	q=1;}
	if(q){
	cout<<"YES\n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";}
	else
	cout<<"NO\n";
	return 0;
}