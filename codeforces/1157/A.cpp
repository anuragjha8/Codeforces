#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n,c;
	map<int,int>s;
	cin >> n;
	s[n]++;
	c++;
	n++;
	while(1==1){
		while(n%10==0)
		n=n/10;
		s[n]++;
		if(s[n]>1)
		break;
		c++;
		n++;
	}
	cout<<c;
	return 0;
}