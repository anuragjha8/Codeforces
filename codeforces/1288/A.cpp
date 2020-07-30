#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		double q=0;
		int a=0,x,y,w=0,e=0,r=0;
		cin >> x>> y;
		q=sqrt(y)-1;
		a=(int)q;
		if(x>=y)
		cout<<"YES\n";
		else{
		r=y%(a+1);
		w=a+(y/(a+1));
		if(r!=0)
		w=w+1;
		if(w<=x && x!=1)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}}
	return 0;
}