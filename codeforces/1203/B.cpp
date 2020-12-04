#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n,m,i=0,j=0,c=0,q=0;
		cin >> n;
		m=4*n;
		int a[m];
		for(i=0;i<m;i++)
		cin >> a[i];
		sort(a,a+m);
		i=0;
		j=m-1;
		if(a[1]!=a[0] || a[m-1]!=a[m-2])
		c=1;
		q=a[i]*a[j];
		while(i<j){
			if(a[i+1]!=a[i] || a[j-1]!=a[j])
			c=1;
			if(a[i]*a[j]!=q)
			c=1;
			//cout<<" "<<a[i]*a[j]<<" ";
			/*if(c==1)
			break;*/
			i+=2;
			j-=2;
		}
		if(c==0)
		cout<<"YES\n";
		else
		cout<<"NO\n";
			}
	return 0;
}