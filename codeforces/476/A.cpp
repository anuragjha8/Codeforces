#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,s=0,z=0,a=0;
	cin >> n>>m;
	if(n%2==0)
	s=n/2;
	else
	s=n/2 + 1;
	while(s<=n){
		if(s%m==0){
		a=s;
		z=1;
		break;
		}
		s++;
	}
	if(z==1)
	cout<<a;
	else
	cout<<"-1";
	return 0;
}