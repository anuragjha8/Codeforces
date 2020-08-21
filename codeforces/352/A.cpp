#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x,c=0,z=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x;
		if(x==5)
		c++;
		else
		z++;
	}
	if(c<9 && z>=1)
	cout<<"0";
	else if(z==0)
	cout<<"-1";
	else if(c<9)
	cout<<"-1";
	else{
	c=c/9;
	for(int i=0;i<c;i++)
	cout<<"555555555";
	for(int i=0;i<z;i++)
	cout<<"0";
	}
	return 0;
}