#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--){
		long long int n,x,q=0,k=0,c=0;
		cin >>n>>x;
		long long int a[n];
		for(int i=0;i<n;i++)
		cin >> a[i];
		while(pow(x,k)<=1e16)
			k++;
		while(k>=0){
			c=0;
		for(int i=0;i<n;i++){
			if(a[i]>=pow(x,k)){
				c++;
				a[i]-=pow(x,k);
			}
		}
		if(c>1){
			q=1;
			break;
		}
		k--;
		}
		for(int i=0;i<n;i++){
			if(a[i]!=0)
			q=1;
		}
		if(q==1)
		cout<<"NO\n";
		else
		cout<<"YES\n";
	}
	return 0;
}