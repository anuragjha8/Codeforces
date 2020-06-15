#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,f=0;
	cin >> n;
	long long int a[n];
	for(int i=0;i<n;i++)
	cin >> a[i];
	sort(a,a+n);
	for(int i=2;i<n;i++){
		if(a[i]<a[i-1]+a[i-2]){
			f=1;
			break;
		}
	}
	if(f==0)
	cout<<"NO";
	else
	cout<<"YES";
	return 0;
}