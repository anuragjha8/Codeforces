#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long int n,p=1,q;
	cin >>n;
	if(n==1)
	p=1;
	else if(n==2)
	p=2;
	else if(n%2==1)
	p=n*(n-1)*(n-2);
	else if(n%3==0){
	p=n*(n-1)*(n-2)/2;
	q=(n-1)*(n-2)*(n-3);
	p=max(p,q);}
	else if(n%2==0)
	p=n*(n-1)*(n-3);
	cout<<p;
	return 0;
}