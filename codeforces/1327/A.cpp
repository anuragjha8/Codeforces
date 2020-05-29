#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int o=0;o<t;o++){
	long long int n,m=0,z=0;
	cin >> n>>m;
	if((n%2==0 && m%2==0)||(n%2==1 && m%2==1)){
		if(n>=m*m)
		z=1;
	}
	if(z==1)
	cout<<"YES"<<endl;
	if(z==0)	
	cout<<"NO"<<endl;
	}
	return 0;
}