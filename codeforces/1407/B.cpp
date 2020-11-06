#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	int n,k=1,m=0,z=0;
	cin >> n;
	int a[n],b[n]={},vis[n]={};
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(a[i]>m){
		z=i;
		m=a[i];}
	}
	b[0]=a[z];
	int x=a[z];
	a[z]=0;
	for (int i = 1; i < n; i++) {
        int k = 0, y = 0;
        for (int j = 0; j < n; j++)
            if (__gcd(a[j], x) > y && a[j]!=0) {
                y = __gcd(a[j], x);
                k = j;
            }
        b[i] = a[k];
        x = y;
        a[k] = 0;
    }
    for (int i = 0; i < n; i++)
        cout << b[i] <<" ";
    cout <<endl;
	}
	return 0;
}