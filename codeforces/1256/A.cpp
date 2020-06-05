#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int j=0;j<t;j++){
		long long int n,s,a,b,p=0,z=0,r=0;
		cin >>a>>b>>n>>s;
		p=a*n;
		if(b>=s)
		z=1;
		else if(p<=s && p+b>=s)
		z=1;
		else if(p>s){
			r=s%n;
			if(b>=r)
			z=1;
			/*a=a-1;
			while(a>=0){
				p=a*n;
			if(s>=p && s<=p+b){
			z=1;
			break;}
				a--;
			}*/
		}
		if(z==1)
		cout<<"YES\n";
		if(z==0)
		cout<<"NO\n";
	}
	return 0;
}