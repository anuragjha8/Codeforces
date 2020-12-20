#include <bits/stdc++.h>
using namespace std;

void dfs(int a,int b,vector<int>*g,vector<int>&v,int &q){
	v[a]=1;
	for(int i:g[a]){
		if(v[i]==0)
		dfs(i,a,g,v,q);
		else if(i!=b)
		q=1;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--){
		long long int n,m,c=0,p=0,z=0,f=0;
		cin >> n>>m;
		int x[m],y[m];
		vector<int> g[n+1],v(n+1);
		for(int i=0;i<m;i++){
			cin >>x[i]>>y[i];
			if(x[i]!=y[i]){
				c++;
			g[x[i]].push_back(y[i]);
			g[y[i]].push_back(x[i]);
			}
		}
		for(int i=1;i<=n;i++)
			if(v[i]==0){
			int q=-1;
			dfs(i,-1,g,v,q);
			if(q==1)
			p++;
		}
		cout<<c+p<<endl;
	}
	return 0;
}