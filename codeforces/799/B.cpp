#include <bits/stdc++.h>
using namespace std;
#define int long long

signed  main() {
	int n,t,x=0,y=0,z=0,q;
	cin >>n;
	map<int,int>f;
	vector<int>v1,v3,v2;
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++){
	cin >>a[i];
	f[a[i]]=1;}
	for(int i=0;i<n;i++){
	cin >>b[i];
	if(b[i]==1)
	v1.push_back(a[i]);
	if(b[i]==2)
	v2.push_back(a[i]);
	if(b[i]==3)
	v3.push_back(a[i]);
	}
	for(int i=0;i<n;i++){
	cin >>c[i];
	if(c[i]==1)
	v1.push_back(a[i]);
	if(c[i]==2)
	v2.push_back(a[i]);
	if(c[i]==3)
	v3.push_back(a[i]);
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	sort(v3.begin(),v3.end());
	cin >>t;
	while(t--){
		cin >>q;
		if(q==1){
			while(x<v1.size() && f[v1[x]]==0)
			x++;
			if(x==v1.size())
			cout<<"-1 ";
			else{
				cout<<v1[x]<<" ";
				f[v1[x]]=0;
				x++;}
		}
		if(q==2){
			while(y<v2.size() && f[v2[y]]==0)
			y++;
			if(y==v2.size())
			cout<<"-1 ";
			else{
				cout<<v2[y]<<" ";
				f[v2[y]]=0;
				y++;}
		}
		if(q==3){
			while(z<v3.size() && f[v3[z]]==0)
			z++;
			if(z==v3.size())
			cout<<"-1 ";
			else{
				cout<<v3[z]<<" ";
				f[v3[z]]=0;
				z++;}
		}
	}
	return 0;
}