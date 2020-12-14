#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m=1e7,c=0;
	cin >>n;
	c=n;
	int a[n],vis[n+1]={};
	for(int i=0;i<n;i++){
		cin >> a[i];
		vis[a[i]]=1;
		if(a[i]==c && vis[c]==1){
			cout<<c<<" ";
			c--;
			while(vis[c]==1){
			vis[c]=0;
			cout<<c<<" ";
			c--;
		}
		cout<<endl;}
		else
		cout<<endl;
	}
	return 0;
}
