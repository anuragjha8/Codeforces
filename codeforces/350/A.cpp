#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,m,x=0;
	cin >>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++)
	cin >>a[i];
	for(int j=0;j<m;j++)
	cin >>b[j];
	sort(a,a+n);
	sort(b,b+m);
	x=max(2*a[0],a[n-1]);
	if(x>=b[0])
	x=-1;
	cout<<x;
	return 0;
}