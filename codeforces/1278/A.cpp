#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
		string s,h;
		cin >>s>>h;
		int l,l1,q=0;
		l=s.length();
		l1=h.length();
		sort(s.begin(),s.end());
		for(int i=0;i<=l1-l;i++){
			string s1=h.substr(i,l);
			sort(s1.begin(),s1.end());
			if(s==s1){
				q=1;
				break;}
		}
		if(q==1)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	return 0;
}