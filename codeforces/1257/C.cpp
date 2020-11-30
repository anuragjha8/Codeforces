#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int f[200001]={};
		vector<pair<int,int>>v;
		for(int i=0;i<n;i++){
			cin >> a[i];
			f[a[i]]++;
			v.push_back(make_pair(a[i],i));
		}
		stable_sort(v.begin(),v.end());
		int j=1,k=0,d=0,m=1e7;
		for(int i=1;i<n;i++){
			if((v[i].first)==(v[i-1].first)){
				k=1;
				d=(v[i].second)-(v[i-1].second);
				if(d<m)
				m=d;
			}
		}
		if(k==0||n==1)
		m=-2;
		cout<<m+1<<endl;
	}
	return 0;
}