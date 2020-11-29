#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n,j=0,k=0,q=0,d=0;
		cin >> n;
		int a[n]={};
		cin >> a[0];
		int mx=a[0],mi=a[0];
		for(int i=1;i<n;i++){
			cin >> a[i];
			if(a[i]>mx){
				mx=a[i];
				j=i;
			}
		}
		for(int i=1;i<n;i++){
				if(abs(a[i]-a[i-1])>1){
					q=i;
					break;
				}
			}
		if(q!=0){
			cout<<"yes\n";
			cout<<q<<" "<<q+1<<endl;
		}
		else
		cout<<"no\n";
	}
	return 0;
}