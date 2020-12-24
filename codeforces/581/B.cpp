#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >>n;
	long long int a[n],b[n],m=0;
	for(int i=0;i<n;i++)
		cin >> a[i];
	b[n-1]=0;
	m=a[n-1]+1;
	for(int i=n-2;i>=0;i--){
		if(a[i]<m)
		b[i]=m-a[i];
		else{
			b[i]=0;
			m=a[i]+1;
		}
	}
	for(int i=0;i<n;i++)
	cout<<b[i]<<" ";
	return 0;
}