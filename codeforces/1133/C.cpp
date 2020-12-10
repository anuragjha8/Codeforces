#include <bits/stdc++.h>
using namespace std;


int main() {
	long long int n;
	cin >>n;
	long long int a[n];
	for(long long int i=0;i<n;i++)
	cin >> a[i];
	sort(a,a+n);
	long long int i=0,j=0,c=0,m=0;
	while(j<n){
		if(a[j]-a[i]<=5)
		j++;
		else
		i++;
		m=max(m,j-i);
	}
	cout<<m;
	return 0;
}