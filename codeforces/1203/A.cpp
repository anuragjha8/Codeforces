#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
		int n,f=0;
		cin >> n;
		int a[n],d[n-1]={};
		for(int i=0;i<n;i++)
		cin >> a[i];
		for(int i=0;i<n-1;i++){
			d[i]=a[i+1]-a[i];
			if(d[i]<0)
			d[i]=d[i]*-1;
		}
		for(int i=0;i<n-1;i++){
			if(d[i]!=1 && d[i]!=n-1){
				f=1;
				break;}
		}
		if(f==1)
		cout<<"NO\n";
		else
		cout<<"YES\n";
	}
	return 0;
}