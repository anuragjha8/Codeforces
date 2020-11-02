#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,c=0,q;
	cin >> n;
	int a[n];
	q=n;
	cin >> a[0];
	for(int i=1;i<n;i++){
		cin >>a[i];
	if(a[i]<a[i-1]){
		c++;
		q=i;
	}}
	if(a[n-1]<a[n-2] && a[0]<a[n-1])
	c=100;
	if(c==1 && a[n-1]>a[n-2] && a[n-1]>a[0])
	c=100;
	if(c<=1)
	cout<<n-q;
	else
	cout<<"-1";
	return 0;
}