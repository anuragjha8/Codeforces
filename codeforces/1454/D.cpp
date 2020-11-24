#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	int t=1;
	cin >> t;
	while(t--){
		int x,n,a,p=1,m=0;
		cin >> x;
		n=x;
		map<int,int>f;
		
		for(int i=2;i*i<=n;i++){
			while(x%i==0){
				f[i]++;
				x=x/i;	
				}
			}
		if(x>1)
		f[x]++;
		for(auto i:f){
			if(i.second>m){
				a=i.first;
				m=i.second;
			}
		}
		cout<<m<<endl;
		for(int i=0;i<m-1;i++)
		cout<<a<<" ";
		p=pow(a,m-1);
		cout<<n/p<<endl;
	}
	return 0;
}