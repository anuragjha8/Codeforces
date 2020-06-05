#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int j=0;j<t;j++){
		int n;
		cin >>n;
		string s(n,'2');
		if((n-1)%3!=0)
		s[n-1]='3';
		else {
			s[n-1]='3';
			s[n-2]='3';
			
		}
		if(n==1)
		s="-1";
		cout<<s<<endl;
	}
	return 0;
}