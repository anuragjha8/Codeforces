#include <bits/stdc++.h>
using namespace std;
 
 vector<int>g[100001],vis(100001),cost(100001);
 void dfs(int n,int &mn){
 	vis[n]=1;
 	mn=min(mn,cost[n]);
 	for(int i:g[n]){
 		if(!vis[i])
 		dfs(i,mn);
 	}
 }
 
 
int main() {
	int n,m,x,y;
	cin >> n>>m;
	long long sum=0;
	for(int i=1;i<=n;i++)
	cin >> cost[i];
	while(m--){
		cin >>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	for(int i=1;i<=n;i++){
		int mn=INT_MAX;
		if(!vis[i]){
			dfs(i,mn);
			sum+=mn;
		}
	}
	cout<<sum;
	return 0;
}