#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,k;
	cin >>n>>k;
	long long int s=0;
	int a[n],d[n-1]={};
	for(int i=0;i<n;i++){
	cin >>a[i];
	if(i!=0)
	d[i]=a[i]-a[i-1];}
	sort(d,d+n);
	k=n-k;
	for(int i=0;i<=k;i++)
	s+=d[i];
	if(n==1)
	s=0;
	cout<<s;
	return 0;
}