#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
		int n,q=0;
		cin >> n;
		int a[n];
		map<int,int>f;
		for(int i=0;i<n;i++){
			cin >> a[i];
			f[a[i]]++;
			if(f[a[i]]>1)
			q=1;
		}
		if(q==1)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	return 0;
}