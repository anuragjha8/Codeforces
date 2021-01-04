#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
		int w,h,n,a=0,b=0;
		long long int p=0;
		cin >>w>>h>>n;
		while(w%2==0){
			a++;
			w=w/2;
		}
		while(h%2==0){
			b++;
			h=h/2;
		}
		p=pow(2,(a+b));
		if(p>=n)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	return 0;
}