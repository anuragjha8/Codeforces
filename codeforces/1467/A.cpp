#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >>t;
	while(t--){
		int n,z=0,q=0;
		cin >> n;
		if(n==1)
		cout<<"9\n";
		else if(n==2)
		cout<<"98\n";
		else if(n==3)
		cout<<"989\n";
		else{
		cout<<"989";
		for(int i=0;i<n-3;i++)
			cout<<(i%10);
		cout<<endl;}
	}
	return 0;
}