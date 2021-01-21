#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int n,q=0,w=0,e=0,r=0,t=0,y=0,m=0;
	cin >>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >>a[i];
		if(a[i]==4)
		q++;
		if(a[i]==8 && q>w)
		w++;
		if(a[i]==15 && w>e)
		e++;
		if(a[i]==16 && e>r)
		r++;
		if(a[i]==23 && r>t)
		t++;
		if(a[i]==42 && t>y){
		y++;
		m++;
		q--;w--;e--;r--;t--;y--;}
	}
	//cout<<q<<w<<e<<r<<t<<y<<endl;
	cout<<n-(6*m);
	return 0;
}