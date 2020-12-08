#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,h=0,q=0;
	cin >> n;
	int a[n],f[1001]={};
	for(int i=0;i<n;i++){
		cin >> a[i];
		f[a[i]]++;
	}
	h=(n/2)+(n%2);
	for(int i=0;i<1001;i++){
		if(f[i]>h)
		q=1;
	}
	if(q==1)
	cout<<"NO\n";
	else
	cout<<"YES\n";
	return 0;
}