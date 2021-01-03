#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,d=0,q=0,r=0,r1=0;
	cin >>n>>m>>d;
	long long int a[n][m],s=0,c=0,c1=0,y=0,x=0;
	int b[n*m]={},l=0;
	cin >>a[0][0];
	r=a[0][0]%d;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		if(!(i==0 && j==0))
		cin >> a[i][j];
		b[l]=a[i][j];
		l++;
		r1=a[i][j]%d;
		if(r!=r1)
		q=1;
	}}
	sort(b,b+l);
	s=b[(l-1)/2];
	if(q==1)
	cout<<"-1\n";
	else{
	for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		c+=(abs(a[i][j]-s)/d);
	}}
		cout<<c;
	}
	return 0;
}