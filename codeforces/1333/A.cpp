#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	for(int l=0;l<t;l++){
	int n,m;
	cin >>n>>m;
	char a[n][m];
	for(int i=0;i<n;i++){
	for(int j=0;j<m;j++)
	a[i][j]='B';
	}
	if(n%2==1 && m%2==1){
		for(int i=1;i<n-1;i=i+2){
		for(int j=0;j<m;j++)
		a[i][j]='W';
		}
		for(int j=1;j<m;j=j+2)
		a[n-1][j]='W';
	}
	else{
		for(int i=0;i<=n-2;i++){
	for(int j=0;j<=m-2;j++)
	a[i][j]='W';
	}}
	for(int i=0;i<n;i++){
	for(int j=0;j<m;j++)
	cout<<a[i][j];
	cout<<endl;
	}
	}
	return 0;
}