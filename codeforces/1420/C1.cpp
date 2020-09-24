#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	int n,q,z=0,m=0;
	cin >> n>>q;
	int a[n+1]={};
	for(int i=1;i<=n;i++)
	cin >> a[i];
    long long int maxprofit = 0;
	for (int i = 1; i <= n; i++) {
	    if (a[i] > a[i - 1])
                maxprofit += a[i] - a[i - 1];
	}
   /*for(int i=z+1;i<n;i++)
   m=max(a[i],m);
   maxprofit+=m;*/
   cout<<maxprofit<<endl;
	}
	return 0;
}