#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int x,a=1,b=1;
	cin >> x;
	for(long long int i=1;i*i<=x;i++){
		if(x%i==0 && __gcd(i,x/i)==1){
			a=i;
			b=x/i;
		}
	}
	cout<<a<<" "<<b;
	return 0;
}