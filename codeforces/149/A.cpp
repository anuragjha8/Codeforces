#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,c=0,s=0;
	cin >> n;
	int a[12];
	for(int i=0;i<12;i++)
	cin >> a[i];
			sort(a,a+12);
	for(int i=11;i>=0;i--){
		s=s+a[i];
		c++;
		if(s>=n)
		break;
	}	
	if(n==0)
	c=0;
	if(s<n)
	c=-1;
	cout<<c;
	return 0;
}