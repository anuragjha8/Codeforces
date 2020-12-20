#include <bits/stdc++.h>
using namespace std;


int main() {
	int y,n,k,r,c=0;
	cin >> y>>k>>n;
	r=k-(y%k);
	for(int i=r;i+y<=n;i+=k){
		c++;
		cout<<i<<" ";
	}
	if(c==0)
	cout<<"-1";
	return 0;
}