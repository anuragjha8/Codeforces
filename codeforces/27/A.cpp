#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >>n;
	int a[n],v[3009]={};
	for(int i=0;i<n;i++){
		cin >> a[i];
		v[a[i]]++;
	}
	for(int i=1;i<3009;i++){
		if(v[i]==0){
			cout<<i;
			break;
		}
	}
	return 0;
}