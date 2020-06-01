#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,m,min=0,max=0;
	cin >>n>>m;
	/*	for(long long int i=(n/m) - 1;i>=1;i--)
	min=min+i;
	//min=(n/m)*(n/m - 1)/2;
		min=min*(m-(n%m));
		for(long long int i=n/m;i>=1;i--)
		min=min+i;
//	min=(n/m)*(n/m + 1)/2;
		min=min*(n%m);  */
	if(n%m==0){
		min=(n/m)*(n/m -1)/2;
		min=min*m;
	}
	else
	min=((n%m)*(n/m +1)*(n/m)/2) + (((n/m)*(n/m - 1)/2)*(m-(n%m)));
	max=(n-m)*(n-m+1)/2;
	if(m==1)
	min=max;
	cout<<min<<" "<<max;
	return 0;
}