#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int o=0;o<t;o++){
	int n;
	cin >> n;
	long long int a[n],b[n],d[n-1],z=0;
	for(int i=0;i<n;i++)
	cin >> a[i];
	sort(a,a+n);
	if(n%2==1){
		cout<<a[n/2]<<" ";
	for(int i=n/2-1;i>=0;i--){
		cout<<a[i]<<" "<<a[n-i-1]<<" ";
	}
	}
	if(n%2==0){
	for(int i=n/2-1;i>=0;i--)
		cout<<a[i]<<" "<<a[n-i-1]<<" ";
	}
	cout<<endl;
	}
	return 0;
}