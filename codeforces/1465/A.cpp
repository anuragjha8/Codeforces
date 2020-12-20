#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=1;
	cin >> t;
	while(t--){
		int n,c=0;
		cin >> n;
		string s;
		cin >> s;
		for(int i=n-1;i>=0;i--){
			if(s[i]==')')
			c++;
			else
			break;
		}
		if(c>n-c)
		cout<<"Yes\n";
		else
		cout<<"No\n";
	}
	return 0;
}