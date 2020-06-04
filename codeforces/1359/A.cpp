#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int j=0;j<t;j++){
		int n,m,k,r=0,q=2;
		cin >> n >> m>>k;
		int a[k+1]={};
		a[1]=min(n/k,m);
		m=m-a[1];
		while(m>0){
			a[q]++;
			q++;
			if(q>k)
			q=2;
			m--;
		}
		int z=a[1]-a[2];
		cout<<z<<endl;
	}
	return 0;
}