#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	for(int y=0;y<t;y++){
	long long int n,k,z=1,i=0,c=0,q=0;
	cin >> n>>k;
	//q=k+(k/n)+((k/n + k%n)/n)+(((k/n + k%n)/n + (k/n + k%n)%n)/n)+(((((k/n + k%n)/n + (k/n + k%n)%n)/n)/n + (((k/n + k%n)/n + (k/n + k%n)%n)/n)%n)/n);
	//if(n==2)
	//q=(2*k)-1;
	long long int s=k;
	q=k+(k/n);
	while(s/n!=0){
		s=((s/n) + (s%n));
		q=q+s/n;
	}
	cout<<q<<endl;
	}
	return 0;
}