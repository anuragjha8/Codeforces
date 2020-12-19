#include <bits/stdc++.h>
using namespace std;

int lcm(int m,int n){
	int k=__gcd(m,n);
	return (m*n/k);
}

int main() {
	int n;
	cin >> n;
	long long int a[n],b[n]={},c[n]={},d[n]={};
	long long int g=1,h=1,p=1,q=1,l=1;
	cin >> a[0];
	b[0]=a[0];
	g=a[0];
	for(int i=1;i<n;i++){
		cin >> a[i];
		g=__gcd(g,a[i]);
		b[i]=g;
		//cout<<b[i];
	}
	c[n-1]=a[n-1];
	h=a[n-1];
	for(int i=n-2;i>=0;i--){
		h=__gcd(h,a[i]);
		c[i]=h;
		//cout<<c[i];
	}
	for(int i=0;i<n;i++){
		if(i==0)
		d[i]=c[1];
		else if(i==n-1)
		d[i]=b[n-2];
		else
		d[i]=__gcd(b[i-1],c[i+1]);
	}
	long long int ans = d[0]; 
    for (int i = 1; i < n; i++) 
        ans = ((d[i] * ans) / (__gcd(d[i], ans))); 
	cout<<ans;
	return 0;
}