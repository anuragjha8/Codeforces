#include <bits/stdc++.h>
using namespace std;

int main() {
/*	int t;
	cin >> t;
	for(int j=0;j<t;j++){*/
		long long int n,m=0;
		cin >>n;
		long long int a[n],b[n];
		cin >> a[0];
		b[0]=a[0];
		m=a[0];
		for(int i=1;i<n;i++){
		cin >> a[i];
		b[i]=a[i]+m;
		if(b[i]>m)
		m=b[i];}
		for(int i=0;i<n;i++)
		cout<< b[i]<<" ";
	return 0;
}