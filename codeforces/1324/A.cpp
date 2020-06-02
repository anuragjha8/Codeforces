#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int o=0;o<t;o++){
		int n,z=0;
		cin >> n;
		int a[n],d[n-1]={};
		for(int i=0;i<n;i++)
		cin >> a[i];
		sort(a,a+n);
		for(int i=0;i<n-1;i++)
			d[i]=a[i+1]-a[i];
		for(int i=0;i<n-1;i++){
			if((d[i]%2)== 1){
			z=1;
				break;
			}}
		if(z==1)
		cout<<"NO\n";
		else
		cout<<"YES\n";
	}

	return 0;
}