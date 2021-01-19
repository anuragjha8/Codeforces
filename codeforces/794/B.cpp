#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	double n,h,x,y;
	cin >>n>>h;
	for(int i=1;i<n;i++){
		x=i/n;
		y=sqrt(x)*h;
		printf("%.9lf ",y);
	}
	return 0;
}