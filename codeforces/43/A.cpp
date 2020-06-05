#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,q=1,w=0;
	cin >> n;
	string s,s1,s2="",s3="";
	cin>>s;
	for(int i=1;i<n;i++){
		cin >>s1;
		if(s1==s)
		q++;
		else{
			s2=s1;
			w++;
		}
	}
	if(q>w)
	cout<<s;
	else
	cout<<s2;
	return 0;
}