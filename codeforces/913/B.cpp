#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,q=0,x=0,c=0;
	cin >> n;
	int p[n+1],f[1001]={},vis[1001]={};
	p[1]=1;
	for(int i=2;i<=n;i++){
		cin >> p[i];
		f[p[i]]++;
	}
	/*for(int i=n;i>=2;i--){
			if(f[i]>=3 && vis[p[i]]==0){
			f[p[i]]--;
			vis[p[i]]=1;
		}
	}
	for(int i=1;i<=n;i++){
		if(f[i]==1 || f[i]==2)
		q=1;
	}*/
	for(int i=1;i<=n;i++){
		if(f[i]!=0){
			for(int j=1;j<=n;j++){
				if(p[j]==i && f[j]==0)
				c++;
			}
			if(c<3){
				q=1;
				break;}}
			c=0;
	}
	
	if(q==1)
	cout<<"No";
	else
	cout<<"Yes";
	return 0;
}