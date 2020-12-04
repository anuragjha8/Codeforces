#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int l=s.length();
		stack<char>a;
		for(int i=0;i<l;i++){
			if(s[i]=='A' || a.empty()==1)
			a.push(s[i]);
			else
			a.pop();
		}
		cout<<a.size()<<endl;
	}
	return 0;
}