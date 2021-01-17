#include <bits/stdc++.h>
using namespace std;
#define int long long

signed  main() {
	int n;
	cin >>n;
	int a[2*n],f[100001]={},c=0,m=0;
	for(int i=0;i<2*n;i++){
	cin >> a[i];
	if(f[a[i]]==0){
		c++;
		f[a[i]]=1;
	}
	else{
		f[a[i]]=0;
		c--;
	}
	m=max(m,c);
	}
	cout<<m;
	return 0;
}