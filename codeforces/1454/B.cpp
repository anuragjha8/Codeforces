#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=1;
	cin >> t;
	while(t--){
		int n,c=-1;
		cin >> n;
		int a[n],f[200001]={},b[n]={};
		for(int i=0;i<n;i++){
			cin >> a[i];
			f[a[i]]++;
			b[a[i]]=i;
		}
		sort(a,a+n);
		for(int i=0;i<n;i++){
			if(f[a[i]]==1){
				c=b[a[i]]+1;
				break;
			}
		}
		cout<<c<<endl;
	}
	return 0;
}