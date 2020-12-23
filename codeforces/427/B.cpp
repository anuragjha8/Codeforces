#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,t,c,d=0,z=0;
	cin >>n>>t>>c;
	long long int s=0,a[n];
	vector<int>v;
	v.push_back(-1);
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(a[i]>t){
		v.push_back(i);
		z++;}
	}
	v.push_back(n);
	for(int i=1;i<v.size();i++){
		d=v[i]-v[i-1]-1;
		s+=max((d-c+1),0);
	}
	cout<<s;
	return 0;
}