#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,s=0,s1=0,c=0,q=0;
	cin >> n;
	int x[n],y[n];
	for(int i=0;i<n;i++){
		cin >> x[i]>>y[i];
		s+=x[i];
		s1+=y[i];
		if(x[i]%2!=y[i]%2)
		q=1;
	}
	if(s%2!=s1%2)
	c=-1;
	else if(s%2==0 && s1%2==0)
	c=0;
	else{
	if(q==1)
	c=1;
	else
	c=-1;
	}
	cout<<c;
	return 0;
}