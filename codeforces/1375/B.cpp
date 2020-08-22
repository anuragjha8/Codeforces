#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	int r,c,f=0;
	cin >> r>>c;
	int a[r][c],n[r][c];
	for(int i=0;i<r;i++){
	for(int j=0;j<c;j++)
	cin >> a[i][j];}
	for(int i=0;i<r;i++){
	for(int j=0;j<c;j++)
	n[i][j]=4;}
	for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
	if((i==0 && j==0)||(i==r-1 && j==0)||(i==0 && j==c-1)||(i==r-1 && j==c-1))
	n[i][j]=2;
	else if(i==0 || i==r-1 || j==0 || j==c-1)
	n[i][j]=3;
	}}
		for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
		if(a[i][j]>n[i][j])
		f=1;
		a[i][j]=n[i][j];
	}}
	if(f==0){
		cout<<"YES\n";
		for(int i=0;i<r;i++){
	for(int j=0;j<c;j++)
	cout<<a[i][j]<<" ";
	cout<<endl;}
	}
	else
	cout<<"NO\n";
	}
	return 0;
}