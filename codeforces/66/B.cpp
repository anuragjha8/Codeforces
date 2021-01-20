#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int n,m=0;
	cin >>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin >>a[i];
	for(int i=0;i<n;i++){
		int c=0;
		for(int j=i-1;j>=0;j--){
			if(a[j]<=a[j+1])
			c++;
			else
			break;
		}
		for(int k=i+1;k<n;k++){
			if(a[k]<=a[k-1])
			c++;
			else
			break;
		}
		m=max(m,c+1);
	}
	cout<<m;
	return 0;
}