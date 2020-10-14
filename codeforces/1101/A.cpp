#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		long long int l,r,d,x=0;
		cin >> l>>r>>d;
		if(d<l || d>r)
		cout<<d<<endl;
		else {
			x=r%d;
			x=d-x+r;
			cout<<x<<endl;
		}
	}
	return 0;
}