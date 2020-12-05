#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int a,b,c,x=0;
		cin >>a>>b>>c;
		x=(b+c-a)/2;
		if(a+c<b)
		x=c;
		else if(a>b+c)
		x=-1;
		cout<<c-x<<endl;
	}
	return 0;
}