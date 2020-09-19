#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+1],c=1,z=1;
	for(int i=1;i<=n;i++)
	cin >> a[i];
	while(z<=n){
	int f[n+1]={},m=0,c=z;
	while(m<2){
		f[c]++;
		//f[a[c]]++;
		if(f[c]>=2){
			cout<<c<<" ";
			f[n+1]={};
			break;}
		else if(f[a[c]]>=2){
			cout<<a[c]<<" ";
			f[n+1]={};
			break;}
		c=a[c];
	}
	z++;
	}
	return 0;
}
