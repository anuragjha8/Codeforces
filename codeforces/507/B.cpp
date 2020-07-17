#include <bits/stdc++.h>
using namespace std;

int main() {
	double r,x1,y1,x2,y2,d=0,a=0,q=0;
	cin >>r>>x1>>y1>>x2>>y2;
	d=sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
	a=d-(2*r);
	a=a/(2*r);
	q=ceil(a);
	q=q+1;
	if(q==-1)
	a=0;
	cout<<q;
	return 0;
}