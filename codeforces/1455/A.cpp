#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int l=s.length();
		int q=l;
		/*for(int i=l-1;i>=0;i--){
			if(s[i]=='0')
			q--;
			else
			break;
		}*/
		cout<<q<<endl;
	}
	return 0;
}