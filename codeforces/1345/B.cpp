#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int o=0;o<t;o++){
		long long int n,c=0;
		cin >> n;
		while(n>=2){
	for(int i=1;i<=n;i++){
		if(((3*i*i)+i)/2 > n){
			n=n-(((3*(i-1)*(i-1))+i-1)/2);
			c++;
			break;
		}
	}}
	cout<<c<<endl;
	}
	return 0;
}