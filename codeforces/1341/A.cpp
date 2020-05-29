#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >>n;
	int a[n];
	for(int j=0;j<n;j++){
		int q,w,e,r,t;
		cin >> q>>w>>e>>r>>t;
		if((q*(w-e) <= r+t)&&(q*(w+e)>= r-t))
		cout<<"Yes\n";
		else
		cout<<"No\n";
	}
	return 0;
}