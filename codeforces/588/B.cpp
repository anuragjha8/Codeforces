#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long int n,x=1;
	cin >>n;
	vector<long long int>v;
	for(long long int i=1;i*i<=n;i++){
		if(n%i==0){
			v.push_back(i);
			if(i!=n/i)
			v.push_back(n/i);
		}
	}
	sort(v.begin(),v.end());
	for(int i=v.size()-1;i>=0;i--){
		int q=0;
		for(long long int j=2;j*j<=v[i];j++){
			if(v[i]%(j*j)==0){
				q=1;
				break;
			}
		}
		if(q==0){
			x=v[i];
			break;
		}
	}
	cout<<x;
	return 0;
}