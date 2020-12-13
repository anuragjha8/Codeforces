#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=1;
	//cin >> t;
	while(t--){
		int a,b,c,d,m;
		cin>>a>>b>>c>>d;
		m=min({a,b,c,d});
		cout<<m;
	}
	return 0;
}