#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int l=s.length();
	long long int c=0,q=0;
	for(int i=0;i<l;i++){
		if(s[i]=='1')
		c++;
	}
	if(l%2==0)
	q=l/2;
	else if(l%2==1 && c>1)
	q=(l/2)+1;
	else
	q=l/2;
	
	cout<<q;
}