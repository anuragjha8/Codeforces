#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int j=0;j<t;j++){
		long long int n,k,a=0,z=0;
		cin >> n>> k;
		if(k>=n)
		a=1;
		else{
			if(n%k==0)
			a=n/k;
			else{
			/*	if(n%2==0){
					z=n;
					while(z>k)
						z=z/2;
					a=n/z;}
				else{
					long long int m=0;
					for(long long int i=1;i<=sqrt(n);i+=2){	
						if(n%i==0 && i<=k && i>m){
						a=n/i;
						if(i<n/i && n/i<=k)
						a=i;}}
					}*/
		//	set<int> q;
			for(long long int i=1;i*i<=n;i++){
				if(n%i==0){
					if(i <=k)
					a=max(a,i);
					if(n/i<=k)
					a=max(a,n/i);
				}
			}
			a=n/a;
			} 
			}
			cout<<a<<endl;
		}
	return 0;
}