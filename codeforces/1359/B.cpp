#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	for(int o=0;o<t;o++){
	int n,m,q,w,d=0,p=0;
	cin >> n>>m>>q>>w;
	char a[n][m];
	for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
	cin >> a[i][j];
	if(a[i][j]=='.')
	d++;
	}}
	if(2*q<=w)
	p=d*q;
	else{
			for(int i=0;i<n;i++){
			for(int j=0;j<m-1;j++){
				if(a[i][j]=='.' && a[i][j+1]=='.'){
				p=p+w;
				a[i][j]='*';
				a[i][j+1]='*';
				}}}
		/*	for(int j=0;j<m;j++){
			for(int i=0;i<n-1;i++){
			
				if(a[i][j]=='.' && a[i+1][j]=='.'){
				p=p+w;
				a[i][j]='*';
				a[i+1][j]='*';
				}}}*/
			
			for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]=='.'){
				p=p+q;
				a[i][j]='*';
				}}}
	}
	cout<<p<<endl;
	}
	return 0;
}