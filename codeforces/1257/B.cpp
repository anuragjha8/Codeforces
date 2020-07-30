#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		long long int x,y,q=0,a=0;
		cin >> x >>y;
		if(x==1 && y>1)
		q=1;
		if(x==2 && y>3)
		q=1;
		if(x==3 && y>3)
		q=1;
		if(q==1)
		cout<<"NO\n";
		else
		cout<<"YES\n";
	}
	return 0;
}