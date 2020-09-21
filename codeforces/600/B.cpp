#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,x=0;
	cin >>n>>m;
	int a[n],b[m],c[200001]={};
	for(int i=0;i<n;i++)
	cin >> a[i];
	for(int j=0;j<m;j++)
	cin >>b[j];
	sort(a,a+n);
	for(int i=0;i<m;i++){
		x=upper_bound(a,a+n,b[i])-a;
		cout<<x<<" ";
		/*int l=0,r=n-1;
		int m=(l+r)/2;
		while(l<=r){
			if(b[i])*/
		}
	return 0;
}