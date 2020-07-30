#include <bits/stdc++.h>
using namespace std;

int main() {
	double h,l,a=0;
	cin >>h>>l;
	a=(l*l - h*h)/(2*h);
	printf("%.9lf",a);
	return 0;
}