#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=1;
	//cin >>t;
	while(t--){
		long long int n,s=0,x;
		cin >>n>>x;
		long long int a[n];
		for(int i=0;i<n;i++)
		cin >> a[i];
		sort(a,a+n);
		for(int i=0;i<n;i++){
			s+=(x*a[i]);
			if(x>1)
			x--;
		}
		cout<<s<<endl;
	}
	return 0;
}