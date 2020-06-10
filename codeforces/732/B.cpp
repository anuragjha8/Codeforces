#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,k,c=0,z=0;
	cin >> n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	cin >> a[i];
	for(int i=1;i<n;i++){
		z=a[i]+a[i-1];
		if(z<k){
			c=c+(k-z);
			a[i]=a[i]+k-z;
		}
	}
	/*if(n==1 && a[0]<k){
		c=k-a[0];
		a[0]=k;
	}*/
	cout<<c<<endl;
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}