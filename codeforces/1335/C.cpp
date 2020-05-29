#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int o=0;o<t;o++){
	int n,c=0,z=0,m=0;
	cin >> n;
	int a[n],f[200001]={};	
	for(int i=0;i<n;i++){
		cin >> a[i];
		f[a[i]]++;
	}
	for(int i=0;i<=200000;i++){
		m=max(m,f[i]);
	if(f[i]>0)
	c++;
	}
	if(c-1>=m)
	z=m;
	else
	z=min(c,m-1);	
	cout<<z<<endl;
	}
	return 0;
}