#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,a=0;
	cin >> n;
	int z=n%4;
	if(z==0)
	a=6;
	if(z==1)
	a=8;
	if(z==2)
	a=4;
	if(z==3)
	a=2;
	if(n==0)
	a=1;
	cout<<a;
	return 0;
}