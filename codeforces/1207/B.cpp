#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,c=0,q=0;
	cin >>n>>m;
	int a[n+2][m+2];
	vector<int>v,v1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
		cin >> a[i][j];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]==1){
				if(a[i+1][j]==1 && a[i][j+1]==1 && a[i+1][j+1]==1){
					c++;
					v.push_back(i);
					v1.push_back(j);
				}
	else{
	if(!((a[i+1][j]==1 && a[i][j+1]==1 && a[i+1][j+1]==1)||(a[i-1][j]==1 && a[i][j+1]==1 && a[i-1][j+1]==1)||(a[i+1][j]==1 && a[i][j-1]==1 && a[i+1][j-1]==1)||(a[i-1][j]==1 && a[i][j-1]==1 && a[i-1][j-1]==1))){
				q=-1;
				break;
			}}
	}}}
	if(q==-1)
	cout<<q<<endl;
	else{
		cout<<c<<endl;
		for(int i=0;i<c;i++)
		cout<<v[i]<<" "<<v1[i]<<endl;
	}
	return 0;
}