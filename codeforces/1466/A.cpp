#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=1;
	cin >> t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		int vis[1000]={};
		vector<int>v;
		for(int i=0;i<n;i++)
		cin >>a[i];
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(vis[a[j]-a[i]]==0)
				v.push_back(a[j]-a[i]);
				vis[a[j]-a[i]]=1;
			}
		}
		cout<<v.size()<<endl;
	}
	return 0;
}