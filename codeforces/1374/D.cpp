#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
		int t;
		cin >> t;
		while(t--){
			int n,m=0,k=0;
			cin >> n>>k;
			map<int,int> f;
			int a[n],b[n],r=0,s=0,c=0;
			//cin >> k;
			m=k;
			for(int i=0;i<n;i++){
				cin >> a[i];
				b[i]=a[i]%k;
				f[b[i]]++;
			}
			m=0;
			for(auto i:f){
				if(i.second>m && i.first!=0){
					c++;
					m=i.second;
					r=i.first;
				}
			}
			
			/*for(int i=1;i<=k;i++){
				if(f[i]>m){
					c++;
					m=f[i];
					r=i;
				}
			}*/
			s=(k-r)+k*(m-1)+1;
			if(c==0)
			s=0;
			cout<<s<<endl;
		}
	return 0;
}