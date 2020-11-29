#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	long long int n,g,b,h=0,s=0,x=0;
	cin >> n>>g>>b;
	if(g>b)
	s=n;
	else{
		h=n/2 + n%2;
		x=h/g;
		s=x*(g+b);
		if(h%g==0)
		s=s-b;
		else
		s+=h%g;
	}
	s=max(n,s);
	cout<<s<<endl;
	}
	return 0;
}