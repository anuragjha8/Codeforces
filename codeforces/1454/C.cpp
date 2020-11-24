#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=1;
	cin >> t;
	while(t--){
		int n,j=0,m=999999,c=0,mx=0;
		cin >> n;
		int a[n];
		map<int,int>f;
		vector<int>v;
		cin >> a[0];
		v.push_back(a[0]);
		for(int i=1;i<n;i++){
			cin >> a[i];
			mx=max(a[i],mx);
			if(a[i]!=a[i-1])
				v.push_back(a[i]);
		}
		int l=v.size();
		for(int i=0;i<l;i++)
			f[v[i]]++;
		f[v[0]]--;
		f[v[l-1]]--;
		for(auto i:f){
			//if(f[i]!=0)
			m=min(m,i.second);
		}
		c=m+1;
		/*if(f[a[0]]==m)
		c--;
		if(f[a[n-1]]==m)
		c--;
		if(m==n)
		c=0;*/
		cout<<c<<endl;
	}
	return 0;
}