#include <bits/stdc++.h>
using namespace std;

int main() {
	int l,k,z=0;
	cin >>l>>k;
	string s;
	cin >> s;
	z=k;
	if(s[0]!='1' && k>=1){
		s[0]='1';
		k=k-1;
	}
	for(int i=1;i<l;i++){
		if(k==0)
		break;
		if(s[i]!='0'){
			s[i]='0';
			k--;
		}
		if(k==0)
		break;
	}
	if(l==1 && s[0]!='0' && z>=1)
	s='0';
	cout<<s;
	return 0;
}