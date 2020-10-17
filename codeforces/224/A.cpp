#include <bits/stdc++.h>
using namespace std;

int main() {
	double x,y,z,a,b,c;
	cin >>x>>y>>z;
	int s=0;
	a=sqrt((x*z)/y);
	b=sqrt((y*x)/z);
	c=sqrt((y*z)/x);
	s=4*(a+b+c);
	cout<<s;
	return 0;
}