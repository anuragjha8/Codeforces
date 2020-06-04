#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int j=0;j<t;j++){
		long long int n,m=0,k,r=0,q=2;
		cin >> n >>k;
		if(n%2==0)
		m=n+(2*k);
		else{
			for(int i=3;i<=n;i=i+2){
				if(n%i==0){
				r=i;
				break;}
			}
			m=n+r+(2*(k-1));
		}
		cout<<m<<endl;
	}
	return 0;
}