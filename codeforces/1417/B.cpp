#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--){
	int n,k,f=0,f1=0,c=0,c1=0;
	cin >>n>>k;
	int a[n],b[n]={};
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(2*a[i]==k)
		f++;
		else if(a[i]>k/2)
		b[i]=1;
	}
	for(int i=0;i<n;i++){
		if(2*a[i]==k){
			if(c%2==1)
			b[i]=1;
			c++;}
	}
	for(int i=0;i<n;i++)
	cout<<b[i]<<" ";
	cout<<endl;
	}
	return 0;
}