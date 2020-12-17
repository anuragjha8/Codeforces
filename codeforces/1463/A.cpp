#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=1;
	cin >>t;
	while(t--){
		long long int a,b,c,s=0,m=0;
		cin >>a>>b>>c;
		m=min({a,b,c});
		s=a+b+c;
		if(s%9==0 && m>=s/9)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	return 0;
}