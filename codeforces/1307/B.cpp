#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >>t;
	while(t--){
		int n,x,q=1e9,m=0,c=0;
		cin >>n>>x;
		int a[n];
		for(int i=0;i<n;i++){
			cin >>a[i];
			if(a[i]<=x)
			m=max(m,a[i]);
			else
			q=2;
		}
		if(m!=0){
		c=x/m;
		if(x%m!=0)
		c++;
		cout<<min(c,q)<<endl;}
		else
		cout<<q<<endl;
	}
	return 0;
}