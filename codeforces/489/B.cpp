#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,p=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin >>m;
	int b[m],f2[m]={};
	for(int i=0;i<m;i++)
	cin>>b[i];
	sort(a,a+n);
	sort(b,b+m);
	for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		if(((a[i]-b[j]==0) || (b[j]-a[i]==1) || (a[i]-b[j]==1)) && f2[j]==0){
			p++;
			f2[j]=1;
			break;}
		}
	}
	cout<<p;
	return 0;
}