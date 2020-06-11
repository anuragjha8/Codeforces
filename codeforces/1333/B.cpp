#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	for(int o=0;o<t;o++){
	long long int n,z=0,p=0,m=0;
	cin >> n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	cin >> a[i];
	for(int i=0;i<n;i++)
	cin >> b[i];
/*	if(a[0]!=b[0] )
	z=1;
	else if(n>1 && a[0]==0 && a[1]!=b[1])
	z=1;
	if(n==1 && a[0]==0 && b[0]==0)
	z=0;*/
	for(int i=0;i<n;i++){
		if(a[i]>b[i] && m==0)
		z=1;
		if(a[i]<b[i] && p==0)
		z=1;
		if(a[i]>0)
		p++;
		if(a[i]<0)
		m++;
	}
		if(z==1)
		cout<<"NO\n";
		else
		cout<<"YES\n";
	}
	return 0;
}