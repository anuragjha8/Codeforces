#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=1;
	cin >>t;
	while(t--){
		long long int n,m,q=0,c=0;
		cin >>n>>m;
		char a[n+2][m+2];
		int l[n+2][m+2]={},r[n+2][m+2]={};
		/*for(int i=0;i<=n+1;i++){
			for(int j=0;j<=m+1;j++){
			if(i==0 || j==0 || i==n+1 || j==m+1)
			a[i][j]='.';
			else
			cin >> a[i][j];
		}}*/
		memset(a,'.',sizeof(a));
		memset(r,0,sizeof(r));
		memset(l,0,sizeof(l));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++)
			cin >> a[i][j];}
			
		for(int i=0;i<=n+1;i++){
			for(int j=0;j<=m+1;j++){
				if(a[i][j]=='*')
					l[i][j]=min(l[i-1][j],l[i][j-1])+1;
			}
		}
		for(int i=0;i<=n+1;i++){
			for(int j=m+1;j>=0;j--){
				if(a[i][j]=='*')
					r[i][j]=min(r[i][j+1],r[i-1][j])+1;
			}
		}
		for(int i=0;i<=n+1;i++){
			for(int j=0;j<=m+1;j++)
			c+=min(l[i][j],r[i][j]);
		}
		cout<<c<<endl;	
	}
	return 0;
}