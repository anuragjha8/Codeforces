#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,d=0;
	cin >> n;
	if(n<=9)
	d=n;
	else if(n<=99)
	d=9+((n-9)*2);
	else if(n<=999)
	d=9+180+(n-99)*3;
	else if(n<=9999)
	d=9+180+2700+(n-999)*4;
	else if(n<=99999)
	d=9+180+2700+36000+(n-9999)*5;
	else if(n<=999999)
	d=9+180+2700+36000+450000+(n-99999)*6;
	else if(n<=9999999)
	d=9+180+2700+36000+450000+5400000+(n-999999)*7;
	else if(n<=99999999)
	d=9+180+2700+36000+450000+5400000+63000000+(n-9999999)*8;
	else if(n<=999999999)
	d=9+180+2700+36000+450000+5400000+63000000+720000000+(n-99999999)*9;
	else
	d=8888888899;
	cout<<d;
	return 0;
}