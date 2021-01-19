#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int t=1,n=500001;
	cin >>t;
	vector<int>v,c(n);
	for(int i=2;i<n;i++){
		if(c[i]==0){
			for(int j=i*i;j<n;j+=i)
				c[j]=1;
			v.push_back(i);
		}
	}
	while(t--){
		int d,x,y,w=0;
		cin >>d;
		for(int i=0;i<v.size();i++){
			if(v[i]-1>=d){
				x=v[i];
				w=i;
				break;
			}
		}
		for(int i=0;i<v.size();i++){
			if(v[i]-x>=d){
				y=v[i];
				break;
			}
		}
		cout<<x*y<<endl;
	}
	return 0;
}