#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,x,y,c=0;
	cin >> n>>x>>y;
	int p=n;
	for(int i=0;i<=y;i++){
		c++;
		p--;
		if(p==x)
		break;
	}
	cout<<c;
	return 0;
}