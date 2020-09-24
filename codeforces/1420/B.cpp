#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	int n,c=0;
	cin >> n;
	long long int a[n],d[n],q=0,p,s=0;
	for(int i=0;i<n;i++){
		cin >> a[i];
	while(a[i]>=1){
	c++;
	a[i]=a[i]/2;}
	d[i]=c;
	c=0;
	}
	long long int f[100]={};
	for(int i=0;i<n;i++)
	f[d[i]]++;
	for(int i=0;i<100;i++){
		p=f[i]*(f[i]-1)/2;
		s=s+p;
	}
	cout<<s<<endl;
	}
	return 0;
}