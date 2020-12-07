#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	int a[n],b[n],x;
	vector<pair<int,int>>v;
	long long int s=0,mx=0;
	for(int i=0;i<n;i++){
		cin >> a[i];
		b[i]=a[i]-i;
		v.push_back({b[i],a[i]});
	}
	sort(v.begin(),v.end());
	s=v[0].second;
	x=v[0].first;
	mx=s;
	for(int i=1;i<n;i++){
		if(v[i].first!=x){
			x=v[i].first;
			s=0;}
		s+=v[i].second;
		mx=max(mx,s);
	}
	cout<<mx;
	return 0;
}