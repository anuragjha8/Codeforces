#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
	int t=1;
	cin >>t;
	while(t--){
		int n,k,c=1,q=-1,d=-1;
		cin >> n>>k;
		int x[n],y[n],s[n];
		for(int i=0;i<n;i++){
		cin >> x[i]>>y[i];
		s[i]=x[i]+y[i];
		}
		sort(s,s+n);
		for(int i=0;i<n;i++){
			c=0;
		for(int j=0;j<n;j++){
			q=abs(x[i]-x[j])+abs(y[i]-y[j]);
			if(q<=k)
			c++;}
		if(c==n){
			d=1;
			break;
		}
		}
		cout<<d<<endl;
	}
	return 0;
}