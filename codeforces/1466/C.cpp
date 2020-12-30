#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=1;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int l=s.length(),c=0;
		for(int i=1;i<l;i++){
			if(s[i]==s[i-1]){
				s[i]='X';
				c++;
			}
			else if(i>1 && s[i]==s[i-2]){
				s[i]='X';
				c++;
			}
		}
		cout<<c<<endl;
	}
	return 0;
}