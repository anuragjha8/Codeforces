#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=1;
	cin >> t;
	while(t--){
		int n,c=0,m=0;
		cin >>n;
		int a[n];
		int f[200005]={};
		for(int i=0;i<n;i++){
		cin >>a[i];
		m=max(m,a[i]);
		f[a[i]]++;}
		for(int i=0;i<n;i++){
			if(f[a[i]]>1){
				f[a[i]+1]++;
				f[a[i]]--;
			}
		}
		for(int i=0;i<=m+3;i++){
			if(f[i]>=1)
			c++;
		}
		cout<<c<<endl;
	}
	return 0;
}