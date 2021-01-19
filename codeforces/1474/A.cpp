#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int t=1;
	cin >>t;
	while(t--){
		int n,x=0,y=0,c=0;
		cin >>n;
		string a,b="";
		cin >>a;
		b+='1';
		for(int i=1;i<n;i++){
			x=a[i-1]-'0';
			y=b[i-1]-'0';
			x=x+y;
			c=a[i]-'0';
			if(c+1!=x)
			b+='1';
			else
			b+='0';
		}
		cout<<b<<endl;
	}
	return 0;
}