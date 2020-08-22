#include <iostream>
using namespace std;

int main() {
	int n,x,t,q=0,r=0;
	cin >> n>>x>>t;
	r=n%x;
	q=(n/x);
	if(r!=0)
	q=q+1;
	q=q*t;
	cout<<q;
	return 0;
}