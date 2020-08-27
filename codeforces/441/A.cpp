#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,p,c=0,s=0;
	cin >>n>>p;
	int a[n];
	vector<int>v;
	for(int i=0;i<n;i++){
		cin >> a[i];
		int x;
		while(a[i]--){
			cin >>x;
			if(p>x)
			s++;
		}
		if(s>0){
		c++;
		v.push_back(i+1);}
		s=0;
	}
	cout<<c<<endl;
	int l=v.size();
	for(int i=0;i<l;i++)
	cout<<v[i]<<" ";
	return 0;
}