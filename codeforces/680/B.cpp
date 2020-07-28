#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x;
	cin >> n>>x;
	int a[n+1];
	for(int i=1;i<=n;i++)
	cin >> a[i];
	int l=x,r=x,c=a[x];
	while(l>=1 || r<=n){
		l--;
		r++;
		if(l>=1 && r<=n && a[l]==1 && a[r]==1)
		c=c+2;
		else if(l<1 && r<=n && a[r]==1)
		c=c+1;
		else if(l>=1 && r>n && a[l]==1)
		c=c+1;
	}
	cout<<c;
	return 0;
}