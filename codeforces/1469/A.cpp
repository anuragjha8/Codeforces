#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=1;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int l=s.length(),q=0;
		int x=0,y=0;
		for(int i=0;i<l;i++){
			if(s[i]=='(')
				x=i;
				else if(s[i]==')')
				y=i;
	}
	/*if(l%2==0 && ()) //&& (y-x-1)%2==0 && x%2==0 && (l-y-1)%2==0)
	cout<<"YES\n";
	else
	cout<<"NO\n";*/
	if(l%2==1)
	cout<<"NO\n";
	else if(s[0]==')' || s[l-1]=='(')
	cout<<"NO\n";
	else
	cout<<"YES\n";
	}
	return 0;
}