#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n;
	long long int a[n],b[n],min=0,f=0,g=0;
	for(int i=0;i<n;i++){
		cin >> a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	min=b[0];
	
	for(int i=0;i<n;i++){
		if(a[i]!=b[i] && b[i]%min!=0){
				f=1;
				break;
			}
		}
	if(f==1)
	cout<<"NO\n";
	else
	cout<<"YES\n";
	}
	return 0;
}