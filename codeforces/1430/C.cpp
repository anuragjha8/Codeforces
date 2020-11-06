#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	int n,x=0,l,q=0,y=0;
	cin >> n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		v[i]=i+1;
	}
	cout<<"2\n";
	q=n-1;
	while(q--){
		l=v.size();
		x=v[l-1];
		if((x%2)==(v[l-2]%2) || l==2)
			y=v[l-2];
		else{
			y=v[l-3];
			int temp=v[l-2];
			v[l-2]=v[l-3];
			v[l-3]=temp;
		}
			v.pop_back();
			v.pop_back();
			v.push_back((x+y)/2);
			cout<<x<<" "<<y<<endl;
		}
	}
	return 0;
}