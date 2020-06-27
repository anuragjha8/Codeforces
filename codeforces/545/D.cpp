#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,c=0,s=0;
	cin >> n;
	long long int a[n],b[n]={},s1=0,d=0,z=0;
	for(int i=0;i<n;i++)
	cin >> a[i];
	sort(a,a+n);
	for(int i=0;i<n;i++){
		if(a[i]>=s){
		c++;
		s=s+a[i];}
	}
		/*for(int i=n-1;i>=0;i--){
		if(a[i]<s1)
		d++;
		s1=s1+b[i];
	}*/
	cout<<c;
	return 0;
}