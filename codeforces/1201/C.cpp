#include <bits/stdc++.h>
using namespace std;
#define int long long

signed  main() {
	int n,k,z=0,m=1e12,x=0,j=0,c=1,s=0;
	cin >>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	cin >>a[i];
	sort(a,a+n);
	j=n/2 + 1;
	m=a[n/2];
	while(j<n){
		x=min(k,c*(a[j]-m));
		m+=(x/c);
		k-=x;
		if(k<1)
		break;
		/*if(x%c!=0)
		m++;*/
		c++;
		j++;
	}
	if(k>0){
		z=k/(n/2 + 1);
		k=k%(n/2 + 1);
		m+=z;
		/*if(k>0)
		m++;*/
	}
	cout<<m;
}