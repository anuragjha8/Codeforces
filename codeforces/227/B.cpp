#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,t,x;
	cin >> n;
	long long int s=0,s1=0;
	int a[n],v[n+1]={},p[n+1]={};
	for(int i=0;i<n;i++){
		cin >> a[i];
		v[a[i]]=i+1;
		p[a[i]]=n-i;
	}
	cin >> t;
	while(t--){
		cin >> x;
		s+=v[x];
		s1+=p[x];
	}
	cout<<s<<" "<<s1;
	return 0;
}