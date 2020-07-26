#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		long long int n;
		cin >> n;
		long long int a[2*n],d=0,z=0,q=2*n;
		vector<int>b;
		vector<int>c;
		for(int i=0;i<q;i++)
		cin >> a[i];
		sort(a,a+q);
		if(n%2==1){
		for(int i=0;i<q;i++){
			if(i%2==0)
			b.push_back(a[i]);
			if(i%2==1)
			c.push_back(a[i]);
		}
		z=n/2;
		d=abs(b[z]-c[z]);
		cout<<d<<endl;
		}
		else{
		d=a[n]-a[n-1];
		cout<<d<<endl;	
		}}
	return 0;
}