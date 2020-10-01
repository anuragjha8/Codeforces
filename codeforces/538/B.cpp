#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int l=s.length();
	int m=0,q=0;
	for(int i=0;i<l;i++)
	m=max(m,((int)s[i])-48);
	cout<<m<<endl;
	int a[m+1][l];
	for(int i=0;i<l;i++)
	a[0][i]=((int)s[i])-48;
	for(int i=0;i<l;i++){
	for(int j=1;j<=m;j++){
		if(a[0][i]>0){
			a[j][i]=1;
			a[0][i]--;
		}
		else
		a[j][i]=0;
	}}
	
	
	
	
	for(int i=1;i<=m;i++){
		q=0;
		for(int j=0;j<l;j++){
		if(a[i][j]==1)
		q=1;
		if(q==0 && a[i][j]==0)
		continue;
		cout<<a[i][j];}
		cout<<" ";
	}
	return 0;
}