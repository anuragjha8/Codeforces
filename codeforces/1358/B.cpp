#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int j=0;j<t;j++){
		int n,c=1;
		cin >> n;
		int a[n];
		c=n+1;
		for(int i=0;i<n;i++)
		cin >> a[i];
		sort(a,a+n);
		for(int i=n-1;i>=0;i--){
			if(a[i]>i+1)
			c--;
			else
			break;
		}
		cout<<c<<endl;
	}
	return 0;
}