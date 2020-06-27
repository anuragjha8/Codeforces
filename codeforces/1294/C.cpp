#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int u=0;u<t;u++){
		long long int n,a=0,b=0,c=0,k=0,d=0;
		cin >> n;
		k=n;
		for(int i=2;i*i<=n;i++){
			if(n%i==0){
				n=n/i;
				a=i;
				break;}}
		for(int i=2;i*i<=k;i++){
			if(n%i==0 && i!=a){
				n=n/i;
				b=i;
				break;}}
		/*	for(int i=2;i*i<=k;i++){
			if(n%i==0 && i!=a && i!=b){
				n=n/i;
				c=i;
				break;}}*/
		if(n>=2 && n!=a && n!=b)
		c=n;
		if(a!=0 && b!=0 && c!=0)
		cout<<"YES\n"<<a<<" "<<b<<" "<<c<<endl;
		else
		cout<<"NO\n";
	}
	return 0;
}