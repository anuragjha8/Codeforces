#include <bits/stdc++.h>
using namespace std;

int main() {
		int n,c=0,q=0,w=0;
		cin >> n;
		vector<long long int>x,h;
		for(int i=0;i<n;i++){
			cin >> q>>w;
			x.push_back(q);
			h.push_back(w);
		}
		c=n;
		if(n>2)
		c=2;
		for(int i=1;i<n-1;i++){
			if(x[i-1]+h[i]<x[i])
			c++;
			else if(x[i]+h[i]<x[i+1]){
				c++;
				x[i]=x[i]+h[i];}
		}
		cout<<c;
	return 0;
}