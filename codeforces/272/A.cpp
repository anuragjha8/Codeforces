#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x,s=0,c=0;
	cin >>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
		s+=a[i];
	}
	for(int i=1;i<6;i++){
		if((s+i)%(n+1)!=1)
		c++;
	}
	cout<<c;
	return 0;
}