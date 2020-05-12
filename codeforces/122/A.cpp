#include <iostream>
using namespace std;

int main() {
	int n,c=0;
	cin>>n;
	if(n%4==0)
	c=1;
	if(n%7==0)
	c=1;
	if(n%47==0)
	c=1;
	if(n%74==0)
	c=1;
	if(n%474==0)
	c=1;
	if(n%477==0)
	c=1;
	if(n%447==0)
	c=1;
	if(n%747==0)
	c=1;
	if(n%774==0)
	c=1;
	if(c==1)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}