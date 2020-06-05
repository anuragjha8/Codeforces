#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,p=0,c=0;
	cin >> n >> m;
	int a[n];
	for(int i=0;i<n;i++)
	cin >> a[i];
	sort(a,a+n);
	for(int i=0;i<n;i++){
		c++;
		if(a[i]>=0)
		break;
		p=p-a[i];
		if(c>=m)
		break;
	}
	cout<<p;
	return 0;
}