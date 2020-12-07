#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m=0,q=0,z=0;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(a[i]>=m){
			m=a[i];
			q=i;}}
		for(int i=q;i>0;i--){
			if(a[i]<=a[i-1])
			z=1;
		}
		for(int i=q;i<n-1;i++){
			if(a[i]<=a[i+1])
			z=1;
		}
	if(z==1)
	cout<<"NO";
	else
	cout<<"YES";
	
	return 0;
}