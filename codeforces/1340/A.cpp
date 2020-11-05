#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n,m=0,x,y,f=0;
		cin >> n;
		int a[n],b[n];
		for(int i=0;i<n;i++)
			cin >> a[i];
		for(int i=n-1;i>=1;i--){
			m=max(m,a[i]);
			if(a[i]!=(a[i-1]+1)){
				if((n-i)!=m)
				f=1;
			}
		}
		if(f==1)
		cout<<"No\n";
		else
		cout<<"Yes\n";
	}
	return 0;
}