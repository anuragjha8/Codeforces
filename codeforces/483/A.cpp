#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int l,r,a,b,c;
	cin >> l>>r;
	if(l%2==0)
	a=l;
	else
	a=l+1;
	b=a+1;
	c=a+2;
	if(c>r)
	cout<<"-1";
	else
	cout<<a<<" "<<b<<" "<<c;
	return 0;
}