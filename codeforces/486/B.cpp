#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,x=0,y=0,z=0;
	cin >> n>>m;
	int a[n][m],b[n][m],s[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		cin >> a[i][j];
		if(a[i][j]==0)
		y++;
	}}
	int r[n]={};
	int c[m]={};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		if(a[i][j]==0)
		r[i]=1;
	}}
	for(int j=0;j<m;j++){
		for(int i=0;i<n;i++){
		if(a[i][j]==0)
		c[j]=1;	
	}}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		if(r[i]==0 && c[j]==0)
		b[i][j]=1;
		else{
			b[i][j]=0;
			x++;
		}
	}}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int q=0;
			for(int p=0;p<n;p++)
			q|=b[p][j];
			for(int r=0;r<m;r++)
			q|=b[i][r];
			s[i][j]=q;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s[i][j]!=a[i][j])
			z=1;
		}}
	if(z==1)
	cout<<"NO";
	else{
		cout<<"YES\n";
		for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		cout<<b[i][j]<<" ";
		cout<<endl;}
	}
	return 0;
}