#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int k,f=1,n=19,m=19,c=0,s=0;
	cin >> k;
	while(f==1){
		m=n;
		while(m>0){
			int r=m%10;
			s=s+r;
			m=m/10;
		}
		if(s==10)
		c++;
		if(c==k)
		break;
		s=0;
		n=n+9;
	}
	cout<<n;
	return 0;
}