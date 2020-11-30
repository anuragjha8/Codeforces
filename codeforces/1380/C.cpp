#include <bits/stdc++.h>
using namespace std;

int main() {
		int t;
		cin >> t;
		while(t--){
			int n,x,c=0,q=0,p=1;
			cin >>n>>x;
			int a[n];
			for(int i=0;i<n;i++)
			cin >> a[i];
			sort(a,a+n);
			for(int i=n-1;i>=0;i--){
				q++;
				p=a[i]*q;
				if(p>=x){
					c++;
					q=0;
				}
			}
			cout<<c<<endl;
		}
	return 0;
}