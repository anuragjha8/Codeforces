#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		long long int c,m,x,a,s=0,q=0;
		cin >> c>>m>>x;
		a=min(c,m);
		s=c+m;
		if(x>=a || (s-a+x)>=2*m)
		cout<<a<<endl;
		else{
			q=x;
			s=s-(2*x);
			if(c==a && (c-x)*2<=m-x)
			q=q+c-x;
			else if(m==a && (m-x)*2<=c-x)
			q=q+m-x;
			else
			q+=(s/3);
			cout<<q<<endl;
		}
	}
	return 0;
}