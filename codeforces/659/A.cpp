#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,n,b,c=0,i=0,s=0;
	cin >> n>>a>>b;
	s=(n+a+b)%n;
	if(s<=0)
	s+=n;
	cout<<s;
	return 0;
}