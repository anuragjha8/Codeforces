#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	long long int x0,x1,x2,y0,y1,y2,p=0,s=0,d=0;
	cin >> x0>>x1>>x2>>y0>>y1>>y2;
	s=min(x2,y1);
	x2=x2-s;
	p=2*s;
	s=min(x2,y2);
	y2=y2-s;
	s=min(y2,x0);
	y2=y2-s;
	s=min(y2,x1);
	d=2*s;
	cout<<p-d<<endl;
	}
	return 0;
}