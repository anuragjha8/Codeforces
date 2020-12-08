#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,p=1,m=1e9 + 7,x=1,y=1;
	cin >> n;
	while(n>=2){
	x=(x*n)%m;
	y=(y*2)%m;
	p=(x%m - y%m + m)%m;
	n--;}
	cout<<p;
	return 0;
}