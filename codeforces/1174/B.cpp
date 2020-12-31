#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,c=0;
	cin >>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(a[i]%2==0)
		c++;
	}
	if(c!=0 && c!=n)
	sort(a,a+n);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	
	return 0;
}