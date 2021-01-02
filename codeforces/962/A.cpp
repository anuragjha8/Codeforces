#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >>n;
	long long int a[n],s=0,s1=0;
	for(int i=0;i<n;i++){
		cin >> a[i];
		s+=a[i];
	}
	for(int i=0;i<n;i++){
		s1+=a[i];
		if(2*s1>=s){
		cout<<i+1;
		break;}
	}
	return 0;
}