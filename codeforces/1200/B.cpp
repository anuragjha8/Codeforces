#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n,k,q=0,z=0;
		long long int m;
		cin >>n>>m>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin >> a[i];
		for(int i=0;i<n-1;i++){
			/*if(a[i]>a[i+1])
			m+=a[i+1]-a[i]+max(a[i+1]-k,0);
			else if(a[i]>=max(a[i+1]-k,0) && a[i]<=a[i+1])
			m+=a[i]-max(a[i+1]-k,0);
			else{
				if(a[i]+m>=a[i+1]-k)
				m=m-(a[i+1]-k-a[i]);
				else{
					q=1;
					break;
				}
			}*/
			if(a[i]>=a[i+1]-k)
			m+=(a[i]-(max(a[i+1]-k,0)));
			else{
				z=a[i+1]-k-a[i];
				if(z>m)
				q=1;
				else
				m-=z;
			}
		}
	if(q==1)
	cout<<"NO\n";
	else
	cout<<"YES\n";
	}
	return 0;
}