#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	vector<int>v;
	for(int i=1;i<20001;i++){
		int x=i,r=0,q=0;
		while(x>0){
			r=x%3;
			if(r==2)
			q=1;
			x=x/3;
		}
		if(q==0)
		v.push_back(i);
	}
	while(t--){
		int n;
		cin >>n;
		for(int i=0;i<v.size();i++){
			if(v[i]>=n){
				cout<<v[i]<<endl;
				break;
			}
		}
	}
	return 0;
}