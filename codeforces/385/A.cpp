#include <bits/stdc++.h>
using namespace std;

int main() {
		int n,c=0,m=0,d=0;
		cin >> n>>c;
		int a[n];
		for(int i=0;i<n;i++)
		cin >> a[i];
		for(int i=0;i<n-1;i++){
		d=a[i]-a[i+1];
		if(d>m)
		m=d;}
	m=max(0,m-c);
	cout<<m;
	return 0;
}