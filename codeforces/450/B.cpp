#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int a1,a2,a3=0,n,a=0,s=0;
	cin >>a1>>a2>>n;
	a3=a2-a1;
	n=n%6;
	if(n==1)
	a=a1;
	if(n==2)
	a=a2;
	if(n==3)
	a=a3;
	if(n==4)
	a=-a1;
	if(n==5)
	a=-a2;
	if(n==0)
	a=-a3;
	long long int m=1000000007;
	if(a<0)
	s=((a%m)+m)%m;
	if(a>=0)
	s=a%1000000007;
	cout<<s;
	return 0;
}