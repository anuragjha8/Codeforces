#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--){
		string s,s1;
		cin >>s>>s1;
		int q=0;
		int f[26]={},f1[26]={};
		for(int i=0;i<s.length();i++){
			f[s[i]-'a']++;
			f1[s1[i]-'a']++;
		}
		for(int i=0;i<26;i++){
			if(f[i]>0 && f1[i]>0)
			q=1;
		}
		if(q==0)
		cout<<"NO\n";
		else
		cout<<"YES\n";
	}
	return 0;
}