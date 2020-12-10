#include <bits/stdc++.h>
using namespace std;


int main() {
	int n,m,x,y,q=0;
	cin >>n>>m;
	int f[n+1]={};
	while(m--){
		cin >>x>>y;
		f[x]++;
		f[y]++;
	}
	for(int i=1;i<=n;i++){
		if(f[i]==0){
			q=i;
			break;
		}}
	cout<<n-1<<endl;
	for(int i=1;i<=n;i++){
		if(i!=q)
		cout<<q<<" "<<i<<endl;
	}
	return 0;
}