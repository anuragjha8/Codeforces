#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,j=0;
	cin >>n;
	long long int a[n],s=0,mi=1e14;
	long double p=1,x;
	for(int i=0;i<n;i++)
	cin >> a[i];
	sort(a,a+n);
	x=n-1;
	p=1/x;
	x=pow(a[n-1],p);
	while(j<x+2){
	for(int i=0;i<n;i++){
		s+=abs(pow(j,i)-a[i]);}
	if(s>=0)
	mi=min(mi,s);
	s=0;
	j++;
	}
	cout<<mi;
	return 0;
}