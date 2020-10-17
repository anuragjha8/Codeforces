#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n;
	long long int a[n],f[12]={};
	for(int i=0;i<n;i++){
		cin >> a[i];
	for(int j=0;j<12;j++){
		if(a[i]==pow(2,j))
		f[j]++;
	}}
	for(int i=0;i<=10;i++)
		f[i+1]+=f[i]/2;
	if(f[11]>=1)
	cout<<"YES\n";
	else
	cout<<"NO\n";
	}
	return 0;
}