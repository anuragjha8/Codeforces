#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n],b[n],d[n],c=0,z=0;
		for(int i=0;i<n;i++)
		cin >> a[i];
		for(int i=0;i<n;i++)
		cin >> b[i];
		for(int i=0;i<n;i++){
		d[i]=b[i]-a[i];
		if(d[i]<0){
		z=1;
		break;}
	}
	for(int i=0;i<n;i++){
		if(d[i]>0){
		c=i;
		break;}
	}
	for(int i=c+1;i<n;i++){
		if(d[i]>0 && d[i]!=d[i-1]){
			z=1;
			break;
		}
	}
	if(z==1)
	cout<<"NO\n";
	else
	cout<<"YES\n";
	}
	return 0;
}