#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x=-1;
	long long int p=1;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	cin >> a[i];
	for(int i=0;i<n;i++){
		if(a[i]==1){
			x=i;
			break;
		}}
	for(int i=x+1;i<n;i++){
		if(a[i]==1){
			p*=(i-x);
			x=i;
		}
	}
	if(x==-1)
	p=0;
	cout<<p;
	return 0;
}