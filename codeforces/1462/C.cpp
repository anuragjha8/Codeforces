#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=1;
	cin >>t;
	while(t--){
		long long int n,s=0,q=0;
		cin >>n;
		if(n<10)
		cout<<n<<endl;
		else if(n<18)
		cout<<n-9<<"9"<<endl;
		else if(n<25)
		cout<<n-17<<"89"<<endl;
		else if(n<31)
		cout<<n-24<<"789"<<endl;
		else if(n<36)
		cout<<n-30<<"6789"<<endl;
		else if(n<40)
		cout<<n-35<<"56789"<<endl;
		else if(n<43)
		cout<<n-39<<"456789"<<endl;
		else if(n<45)
		cout<<n-42<<"3456789"<<endl;
		else if(n==45)
		cout<<n-44<<"23456789"<<endl;
		else if(n>45)
		cout<<"-1\n";
	}
	return 0;
}