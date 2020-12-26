#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,x=0;
	cin >>n;
	int a[n];
	vector<int>v;
	for(int i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n);
	for(int i=0;i<n;i+=2)
	v.push_back(a[i]);
	if(n%2==0)
	x=n-1;
	else
	x=n-2;
	for(int i=x;i>=0;i-=2)
	v.push_back(a[i]);
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";
	return 0;
}