#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	int n,z=0;
	cin >> n;
	int a[n],b[n],f[n]={};
	for(int i=0;i<n;i++){
		cin >> a[i];
		b[i]=(a[i]+i)%n;
		if(b[i]<0)
		b[i]=n+b[i];
		//cout<<b[i]<<" ";
		f[b[i]]++;
	}
	for(int i=0;i<n;i++){
		//cout<<f[i]<<" ";
		if(f[i]>1)
		z=1;
		}
	if(z==1)
	cout<<"NO\n";
	else
	cout<<"YES\n";
	}
	return 0;
}