#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		long long int n,q=0,c=0;
		cin >> n;
		if(n%2==1 || n==2){
		if(n==1)
		cout<<"FastestFinger\n";
		else
		cout<<"Ashishgup\n";}
		else{
			int o=0,e=0;
			n=n/2;
			for(int i=2;i*i<=n;i++){
				if(n%i==0)
				q++;
				}
			while(n!=1){
				if(n%2!=0){
				o=1;
				break;}
				n=n/2;}
			if(o==0)
			cout<<"FastestFinger\n";
			else{
			if(q==0 && n!=1)
				cout<<"FastestFinger\n";
				else
				cout<<"Ashishgup\n";
		}}}
	return 0;
}