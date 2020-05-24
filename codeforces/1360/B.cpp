#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		int n,min=999999;
		cin >>n;
		int a[n];
		for(int j=0;j<n;j++)
		cin >> a[j];
		sort(a,a+n);
		for(int j=1;j<n;j++){
			if(a[j]-a[j-1]<=min)
			min=a[j]-a[j-1];
		}
		cout<<min<<endl;
	}
	return 0;
}