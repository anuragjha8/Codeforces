#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int o=0;o<t;o++){
		int n;
		cin >> n;
		int a[2*n],f[51]={};
		for(int i=0;i<2*n;i++){
			cin >> a[i];
			f[a[i]]++;
			if(f[a[i]]==1)
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}