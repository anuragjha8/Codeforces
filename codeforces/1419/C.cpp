#include <bits/stdc++.h>
using namespace std;

int main(){
		int t;
		cin >> t;
		while(t--){
			int n,r,c=0,q=2;
			cin >> n>>r;
			long long int a[n],s=0;
			for(int i=0;i<n;i++){
				cin >> a[i];
				if(a[i]==r)
				c++;
				s=s+a[i];
			}
			if(c==n)
			q=0;
			else if((s%n==0 && s/n==r)||(c>0))
			q=1;
			cout<<q<<endl;
		}
	return 0;
}
