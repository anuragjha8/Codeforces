#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n,x=0,y=0;
		cin >> n;
		string a;
		cin >> a;
		vector<int>v;
		for(int i=0;i<n;i++){
			if(a[i]=='1')
			v.push_back(max(i+1,n-i));
			//cout<<max(i+1,n-i);
		}
		sort(v.begin(),v.end());
		y=v.size();
		x=v[y-1];
		if(y==0)
		cout<<n<<endl;
		else
		cout<<2*x<<endl;
	}
	return 0;
}