#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,t;
	cin >> n;
	long long int a[n],b[n]={},s[n]={},s1[n]={};
	for(int i=0;i<n;i++){
		cin >> a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	s[0]=a[0];
	s1[0]=b[0];
		for(int i=1;i<n;i++){
		s[i]=s[i-1]+a[i];
		s1[i]=s1[i-1]+b[i];
	}
	cin >> t;
	for(int j=0;j<t;j++){
		long long int x,l,r,q=0;
		cin >> x>>l>>r;
		if(x==1){
			if(l==1)
			q=s[r-1];
			else
			q=s[r-1]-s[l-2];}
		if(x==2){
			if(l==1)
			q=s1[r-1];
			else
			q=s1[r-1]-s1[l-2];}
			cout<<q<<endl;
	}
	return 0;
}