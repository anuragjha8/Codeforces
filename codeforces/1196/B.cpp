#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n,k,c=0;
		cin >>n>>k;
		int a[n];
		vector<int>v;
		for(int i=0;i<n;i++){
		cin >> a[i];
		if(a[i]%2==1){
			c++;
			if(c<k)
			v.push_back(i+1);
		}
	}
	if(k>c || (c-k-1)%2==0)
	cout<<"NO\n";
	else{
		cout<<"YES\n";
		int l=v.size();
		for(int i=0;i<l;i++)
		cout<<v[i]<<" ";
		cout<<n<<endl;
	}
	}
	return 0;
}