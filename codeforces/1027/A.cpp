#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t=1;
	cin >> t;
	while(t--){
		int n,q=0;
		cin >> n;
		string s;
		cin >> s;
		for(int i=0;i<n/2;i++){
			if(s[i]!=s[n-i-1]){
				/*if(s[i]==char(s[n-i-1]+1) || s[i]==char(s[n-i-1]-1))
				q=0;
				else if(s[n-i-1]==char(s[i]+1) || s[n-i-1]==char(s[i]-1))
				q=0;*/
				if(char(s[n-i-1]+1)==char(s[i]-1) || char(s[i]+1)==char(s[n-i-1]-1))
				q=0;
				else{
					q=1;
					break;}
			}
		}
		if(q==1)
		cout<<"NO\n";
		else
		cout<<"YES\n";
	}
	return 0;
}