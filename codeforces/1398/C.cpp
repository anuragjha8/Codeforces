#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n,c=0,i=0;
		long long int q=0,z=0;
		cin >> n;
		string a;
		cin >> a;
		map<int,int>f;
		int s[n+1]={};
		for(i=0;i<n;i++)
			s[i+1]=s[i]+(a[i]-'0');
		for(i=0;i<=n;i++)
		f[s[i]-i]++;
		for(auto i:f){
			z=i.second;
			q+=(z*(z-1)/2);
		}
		cout<<q<<endl;
	}
	return 0;
}