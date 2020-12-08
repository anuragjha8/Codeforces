#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--){
		int n,k,q=0,l=0,l1=0;
		cin >>n>>k;
		int f[26]={};
		string s,a[k];
		cin >> s;
		sort(s.begin(),s.end());
		for(int i=0;i<n;i++){
			f[s[i]-'a']++;
			if(i<k)
			a[i]+=s[i];
		}
		if(f[s[0]-'a']<k || k==n)
		cout<<s[k-1]<<endl;
		else{
			if(s[k]==s[n-1]){
				for(int i=k;i<n;i++)
				a[i%k]+=s[i];
				cout<<a[(n-1)%k]<<endl;
			}
			else
				cout<<s[0]<<s.substr(k,n-k)<<endl;
		}
	}
	return 0;
}