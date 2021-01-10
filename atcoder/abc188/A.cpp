#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int x,y;
	int a[2]={};
	cin >>x>>y;
	a[0]=y;
	a[1]=x;
	sort(a,a+2);
	y=a[0];
	x=a[1];
	if(y+3>x)
	cout<<"Yes";
	else
	cout<<"No";
	return 0;
}