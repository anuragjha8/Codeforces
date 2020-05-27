#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int j=0;j<t;j++){
		long long int x,y,a,b,p=0,q=0,r=0,s=0,mi=0,ma=0,z=0,m=0;
		cin >>x>>y>>a>>b;
		if(x>=y){
			ma=x;
			mi=y;
		}
		else{
				ma=y;
			    mi=x;
		}
		p=a*(x+y);
		q=mi*b + a*(ma-mi);
		r=b*ma + a*(ma-mi);
		z=min(p,q);
		m=min(z,r);
		cout<<m<<endl;
	}
	return 0;
}