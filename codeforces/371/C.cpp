#include <bits/stdc++.h>
using namespace std;
#define int  long long
signed main() {
	string a;
	cin >>a;
	int cb=0,cs=0,cc=0,nb=0,nc=0,ns=0,pb=0,pc=0,ps=0;
	int l=0,h=1e13,x=0,y=0,m=0;
	int p=0;
	for(int i=0;i<a.length();i++){
		if(a[i]=='S')
		cs++;
		if(a[i]=='C')
		cc++;
		if(a[i]=='B')
		cb++;
	}
	cin >>nb>>ns>>nc;
	cin >>pb>>ps>>pc;
	cin >>p;
	while(l<=h){
		m=(l+h)/2;
		y=max(0ll,m*cb-nb)*pb + max(0ll,m*cs-ns)*ps + max(0ll,m*cc-nc)*pc;
		if(y>p)
			h=m-1;
		else
			l=m+1;
	}
	cout<<h;
	return 0;
}