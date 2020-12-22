#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--){
		int n,c=0,j=n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			if(a[i]<i){
				j=i;
				break;
			}
		}
		for(int i=j-1;i<n;i++){
			if(a[i]<n-i-1)
			c=1;
		}
		if(c==1)
		cout<<"No\n";
		else
		cout<<"Yes\n";
	}
	return 0;
}