#include <iostream>
using namespace std;

int main() {
	int m,n;
	cin >> m>>n;
	int l=m*n;
	if(l%2==1)
	l=l-1;
	l=l/2;
	cout<<l;
	return 0;
}