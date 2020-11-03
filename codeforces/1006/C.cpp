#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,l,r,c=0;
	cin >> n;
	int a[n],vis[n]={};
	long long int s1=0,s2=0,z=0;
	for(int i=0;i<n;i++)
		cin >> a[i];
	l=0;
	r=n-1;
	while(l<r){
		if(vis[l]==0)
		s1=s1+a[l];
		if(vis[r]==0)
		s2=s2+a[r];
		vis[l]=1;
		vis[r]=1;
		if(s1==s2){
		c++;
		l++;
		if(s1>z)
		z=s1;
		}
		else if(s1<s2)
		l++;
		else
		r--;
		}
	cout<<z;
	return 0;
}