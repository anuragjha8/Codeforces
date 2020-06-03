#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long int p=0,c=0;
	int a[n],b[n];
	cin >> a[0]>> b[0];
	p=a[0]*b[0];
	c=b[0];
	for(int i=1;i<n;i++){
	cin >> a[i]>>b[i];
	if(b[i]<c)
	c=b[i];
	p=p+(a[i]*c);
	}
	cout<<p;
	return 0;
}