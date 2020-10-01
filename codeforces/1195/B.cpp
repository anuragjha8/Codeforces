#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,k;
	cin >>n>>k;
	long double r;
	r=sqrt(9+(8*(n+k)));
	r=(r-3)/2;
	n=(int)(n-r);
	cout<<n;
	return 0;
}