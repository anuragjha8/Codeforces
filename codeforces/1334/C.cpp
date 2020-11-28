#include <bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n,x=0,j=0;
		long long m=1e13,z=0,q=0,c=0;
		cin >> n;
		long long int a[n],b[n];
		for(int i=0;i<n;i++)
		cin >> a[i]>>b[i];
		for(int i=0;i<n;i++){
			j=(i+1)%n;
			z=min(a[j],b[i]);
			c+=a[j]-z;
			m=min(z,m);
			}
		c+=m;
	cout<<c<<endl;
	}
	return 0;
}