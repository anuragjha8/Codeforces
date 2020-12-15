#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=1;
	cin >>t;
	while(t--){
		int n,c=0;
		cin >> n;
		int a[n];
		for(int k=0;k<n;k++)
		cin >>a[k];
		int i=0,j=n-1;
		while(c<n){
			if(c%2==0){
			cout<<a[i]<<" ";
			i++;}
			else{
				cout<<a[j]<<" ";
				j--;
			}
			c++;
		}
		cout<<endl;
	}
	return 0;
}