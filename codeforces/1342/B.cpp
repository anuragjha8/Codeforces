#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int j=0;j<t;j++){
		string s,a="";
	cin >> s;
	int l=s.length(),z=0,o=0;
	for(int i=0;i<l;i++){
		if(s[i]=='0')
		z++;
		else
		o++;
	}
	if(l<=2 || z==0 || o==0)
	a=s;
	else{
		for(int i=0;i<l;i++)
		a=a+"10";
	}
	cout<<a<<endl;
	}
	return 0;
}