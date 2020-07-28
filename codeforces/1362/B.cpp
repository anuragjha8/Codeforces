#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n,w=0,e=0;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
		cin >> a[i];
		sort(a,a+n);
		for(int i=1;i<=2*a[n-1];i++){
			vector<int>v;
			int q=0;
			for(int j=0;j<n;j++){
				int p=i^a[j];
				v.push_back(p);
				//cout<<v[j];
			}
			sort(v.begin(),v.end());
			for(int j=0;j<n;j++){
				if(a[j]!=v[j]){
					q=1;
					break;
				}}
			if(q==0){
			w=1;
			e=i;
			break;}
			v.clear();
		}
		if(w==0)
		e=-1;
		cout<<e<<endl;
	}
	return 0;
}