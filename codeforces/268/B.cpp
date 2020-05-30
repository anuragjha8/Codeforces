#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >>n;
	long long int s=n,k=2;
	while(n>1){
		n=n-1;
		s=s+((k*n)-(k-1));
		k++;
	}
	cout<<s;
	return 0;
}