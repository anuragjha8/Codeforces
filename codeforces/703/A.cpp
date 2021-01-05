#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x=0,y=0;
	cin >>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin >> a[i]>>b[i];
		if(a[i]>b[i])
		x++;
		if(b[i]>a[i])
		y++;
	}
	if(x>y)
	cout<<"Mishka";
	else if(y>x)
	cout<<"Chris";
	else
	cout<<"Friendship is magic!^^";
	return 0;
}