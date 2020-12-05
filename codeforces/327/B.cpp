#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t=1;
	//cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
		a[i]=n+i;
		for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	}
	return 0;
}