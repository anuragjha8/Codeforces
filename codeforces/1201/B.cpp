#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,j=0;
	cin >> n;
	int a[n];
	long long int s=0;
	for(int i=0;i<n;i++){
	cin >> a[i];
	s+=a[i];
	}
	sort(a,a+n);

	if(s%2==1 || a[n-1]>s-a[n-1])
		cout<<"NO\n";
	else
		cout<<"YES\n";
	
	return 0;
}