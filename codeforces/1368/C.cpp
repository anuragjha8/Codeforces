#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,x=0;
	cin >>n;
	cout<<3*n + 4<<endl;
	cout<<"0 0\n0 1\n1 0\n1 1\n2 1\n1 2\n2 2\n";
	for(int i=2;i<=n;i++)
		cout<<i<<" "<<i+1<<endl<<i+1<<" "<<i<<endl<<i+1<<" "<<i+1<<endl;
	return 0;
}