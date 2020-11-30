#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n,j=0;
		cin >> n;
		int a[n],l[n];
		vector<int>v;
		for(int i=0;i<n;i++)
		cin >> a[i];
		for(int i=0;i<n;i++){
		cin >> l[i];
		if(l[i]==0)
		v.push_back(a[i]);
		}
		sort(v.begin(),v.end());
		reverse(v.begin(),v.end());
		for(int i=0;i<n;i++){
			if(l[i]==0){
				cout<<v[j]<<" ";
				j++;
			}
			else
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}