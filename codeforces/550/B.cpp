#include <bits/stdc++.h>
using namespace std;


int n,c=0,l,r,d;
int a[20];

void subset(vector<int>v,int i){
	if(i>=n){
		int mx=0,mi=1e8;
		long long int s=0;
		for(int j=0;j<v.size();j++){
			s+=a[v[j]];
			mx=max(mx,a[v[j]]);
			mi=min(mi,a[v[j]]);
		}
		if(s>=l && s<=r && mx-mi>=d)
		c++;
		return;
	}
	subset(v,i+1);
	v.push_back(i);
	subset(v,i+1);
}

int main() {
	//long long int n,l,r,d,c=0;
	cin >>n>>l>>r>>d;
	for(int i=0;i<n;i++)
	cin >> a[i];
	sort(a,a+n);
	vector<int>v;
	subset(v,0);
	cout<<c<<endl;
	return 0;
}