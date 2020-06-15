#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	for(int o=0;o<t;o++){
	string s;
	cin >> s;
	int j=1,c=0,m=1;
	int l=s.length();
	for(int i=0;i<l;i++){
		if(s[i]=='L'){
			j++;
			if(j>m)
			m=j;
			if(i+1<=l-1 && s[i+1]=='R')
			j=1;
		}
	}
	cout<<m<<endl;
	}
	return 0;
}