#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
		int n,s=0,x=0,y=0;
		cin >>n;
		int a[n];
		for(int i=0;i<n;i++){
		cin >> a[i];
		s+=a[i];
		if(a[i]==1)
		x++;
		else
		y++;}
		if(s%2==1 || (y%2==1 && x==0))
		cout<<"NO\n";
		else
		cout<<"YES\n";
	}
	return 0;
}