#include <iostream>
using namespace std;

int main() {
	long long int n,m,a;
	long long int a1=0,a2=0,q=0;
	cin >> n >> m >> a;
	if(n%a==0)
	a1=n/a;
	if(n%a!=0)
	a1=(n/a)+1;
	if(m%a==0)
	a2=m/a;
	if(m%a!=0)
	a2=(m/a)+1;
	q=a1*a2;
	cout << q;
	return 0;
}