#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,k,x,j=2,y,l=0,p=1,q=0;
	cin >>n>>k;
	x=n;
	vector<long long int>v;
	for(long long int i=1;i*i<=n;i++){
		if(n%i==0){
			v.push_back(i);
			if(i!=(n/i))
			v.push_back(n/i);
		}
	}
	sort(v.begin(),v.end());
	if(k>v.size())
	cout<<"-1";
	else{
		cout<<v[k-1];
	}
	return 0;
}