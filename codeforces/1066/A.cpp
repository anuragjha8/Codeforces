#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	double n,v,l,r,s=0;
	int x;
	cin >> n>>v>>l>>r;
	x=n/v;
	/*s=(r-l)/v;
	if(r%v==0 || l%v==0)
	s++;*/
	s=int(r/v)-ceil(l/v)+1;
	cout<<x-(int)s<<endl;
	}
	return 0;
}