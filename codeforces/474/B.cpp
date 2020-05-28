#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m=0;
	cin >>n;
	long long int a[n+1],s[n+1]={},sum=0;
	for(int i=1;i<=n;i++){
	cin >> a[i];
	sum=sum+a[i];
	s[i]=sum;
	}
	cin >> m;
	long long int b[m+1];
	int c=0;
	for(int i=1;i<=m;i++){
		cin >> b[i];
		if(b[i]<=s[1])
		c=1;
		c=(lower_bound(s,s+n,b[i])-s);
		cout<<c<<endl;
	}
	return 0;
}