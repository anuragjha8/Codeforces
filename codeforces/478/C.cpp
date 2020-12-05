#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int r,g,b,s=0,x=0;
	int a[3];
	cin >> r>>g>>b;
	a[0]=r;
	a[1]=g;
	a[2]=b;
	sort(a,a+3);
	r=a[2];
	g=a[1];
	b=a[0];
	/*x=r-b+g-b;{
	s=min((g-b),((r-b+g-b)/3));
	s+=b-1;
	cout<<s;*/
	s=(r+g+b);
	if(s%3==0)
	s=(s/3);
	else
	s=s/3;
	x=g+b;
	cout<<min(s,x);
	return 0;
}