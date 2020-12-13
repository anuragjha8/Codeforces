#include <bits/stdc++.h>
using namespace std;

int main() {
	int s,n,m=1e9,d=0,c=0;
	cin >>s>>n;
	int a[n];
	vector<int>v;
	for(int i=0;i<n;i++)
	cin >> a[i];
	sort(a,a+n);
	v.push_back(0);
	for(int i=0;i<n;i++)
	v.push_back(a[i]);
	v.push_back(s+1);
	for(int i=1;i<v.size();i++){
		d=v[i]-v[i-1]-1;
		if(d>0)
		m=min(m,d);
	}
	for(int i=1;i<v.size();i++){
		d=v[i]-v[i-1]-1;
		if(d>0){
		if(d%m==0)
		c+=(d/m);
		else
		c+=(d/m)+1;
		}		
	}
	cout<<c;
	return 0;
}