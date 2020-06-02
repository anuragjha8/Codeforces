#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,k,q=0,z=1;
	cin >> n>>k;
	int a[n+1],s=0,m=99999;
	for(int i=1;i<=n;i++)
	cin >> a[i];
	for(int i=1;i<=k;i++){
		s=s+a[i];}
		m=s;
	for(int i=k+1;i<=n;i++){
		s=s+a[i]-a[i-k];
		if(s<m){
			m=s;
			z=i-k+1;
		}
		}
	cout<<z;
	/*for(int i=0;i<n;i++){
		q++;
		s=s+a[i];
		if(q==k){
			i=i-k+1;
		if(s<m){
		m=s;
		z=i+1;}
		s=0;
		q=0;
		}
	if(z==-1 || z==0)
	z=1;
	}
//	for(int i=0;i<n;i++){
	cout<<z;*/
	return 0;
}