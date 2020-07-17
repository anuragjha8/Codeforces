#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x=0,y=0;
	cin >> n;
	int a[n],f[10001]={};
	vector<int>v;
	for(int i=0;i<n;i++){
	cin >> a[i];
	f[a[i]]++;}
	sort(a,a+n);
	y=a[n-1];
	for(int i=0;i<n;i++){
		if(y%a[i]!=0 || f[a[i]]==2)
		v.push_back(a[i]);}
	int l=v.size();
	x=v[l-1];
	cout<<x<<" "<<y;
	return 0;
}