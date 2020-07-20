#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long int q=0;
	if(n%2==1)
	q=0;
	else
	q=pow(2,(n/2));
	cout<<q;
	return 0;
}