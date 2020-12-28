#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=1;
	cin >> t;
	while(t--){
		int n,m,mx=0,mx2=0,s=0,s1=0;
		cin >>n;
		int a[n];
		for(int i=0;i<n;i++){
		cin >> a[i];
		s+=a[i];
		mx=max(s,mx);}
		cin >>m;
		int b[m];
		for(int i=0;i<m;i++){
			cin >> b[i];
		s1+=b[i];
		mx2=max(s1,mx2);}
		cout<<max(0,(mx+mx2))<<endl;
	}
	return 0;
}