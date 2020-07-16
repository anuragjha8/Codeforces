#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int o=0;o<t;o++){
	int n,x,d=0,s=0,c=0,m=0,q=0;
	cin >>n>>x;
	n=n;
	long long int a[n],b[n]={},p=0;
	for(int i=0;i<n;i++)
	cin >>a[i];
	for(int i=1;i<n-1;i++){
		if(a[i]>a[i-1] && a[i]>a[i+1])
		p++;
		b[i]=p;}
	b[n-1]=b[n-2];	
	for(int i=0;i<n+1-x;i++){
		int r=i+x-2;
		 d=b[r] - b[i];
		 if(d>m){
		 	q=i;
		 	m=d;
		 }}
	/*for(int i=0;i<n;i++)
	cout<<b[i];
	cout<<endl;*/
		cout<<m+1<<" "<<q+1<<endl;
}
	return 0;
}