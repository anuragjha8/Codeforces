#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	for(int o=0;o<t;o++){
	int n,m,c=0,r=0,f=0,z=0;
	cin >>n>>m;
	r=n;
	c=m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		cin >> a[i][j];}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		if(a[i][j]==1){
		r--;
		break;}
	}}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[j][i]==1){
			c--;
			break;
			}
			}}
	z=min(r,c);
	if(z%2==0)
	cout<<"Vivek\n";
	else
	cout<<"Ashish\n";
	}
	return 0;
}