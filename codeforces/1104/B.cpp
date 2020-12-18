#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	stack<char>a;
	int c=0;
	for(int i=0;i<s.size();i++){
		if(a.size()==0)
		a.push(s[i]);
		else if(a.top()==s[i]){
		a.pop();
		c++;}
		else
		a.push(s[i]);
	}
	if(c%2==1)
	cout<<"Yes\n";
	else
	cout<<"No\n";
	return 0;
}