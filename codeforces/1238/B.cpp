#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--){
		int n,r,c=0,x=0,y=0;
		cin >>n>>r;
		vector<int>v;
		int a[n];
		for(int i=0;i<n;i++)
		cin >> a[i];
		sort(a,a+n);
		v.push_back(a[0]);
		for(int i=1;i<n;i++){
			if(a[i]!=a[i-1])
			v.push_back(a[i]);
		}
		int l=v.size();
		y=l-1;
		while(x<v[y] && y>=0){
			c++;
			y--;
			x+=r;
		}
		cout<<c<<endl;
	}
	return 0;
}