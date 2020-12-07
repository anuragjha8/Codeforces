#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,pair<int,int>>

bool comp(pii x,pii y){
	if(x.first==y.first) return x.second.first<=y.second.first;
	return x.first>y.first;
}
signed main() {
	int n;
	cin >> n;
	int a[n];
	
	vector<pair<int,pair<int,int>>>v;
	for(int i=0;i<n;i++){
		int x=0,y=0;
		cin >> a[i];
		int t=a[i];
		while(a[i]%3==0){
			x++;
			a[i]/=3;
		}
		while(a[i]%2==0){
			y++;
			a[i]/=2;
		}
		v.push_back({-x,{y,t}});
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++)
	cout<<v[i].second.second<<" ";
	return 0;
}