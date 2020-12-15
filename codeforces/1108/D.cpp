#include <bits/stdc++.h>
using namespace std;

int main() {
	int l,c=0;
	cin >>l;
	string s;
	cin >>s;
	for(int i=1;i<l-1;i++){
		if(s[i]==s[i-1] && s[i]==s[i+1] && s[i+1]==s[i-1]){
			c++;
			if(s[i]=='R')
			s[i]='G';
			else if(s[i]=='G')
			s[i]='B';
			else if(s[i]=='B')
			s[i]='R';
		}
	}
	for(int i=0;i<l-1;i++){
		if(s[i]==s[i+1]){
			c++;
			if(i==l-2){
				if(s[i]=='R')
				s[i+1]='G';
				else if(s[i]=='G')
				s[i+1]='B';
				else if(s[i]=='B')
				s[i+1]='R';
			}
			else if(s[i]=='R' && s[i+2]=='G')
			s[i+1]='B';
			else if(s[i]=='R' && s[i+2]=='B')
			s[i+1]='G';
			else if(s[i]=='B' && s[i+2]=='G')
			s[i+1]='R';
			else if(s[i]=='B' && s[i+2]=='R')
			s[i+1]='G';
			else if(s[i]=='G' && s[i+2]=='R')
			s[i+1]='B';
			else if(s[i]=='G' && s[i+2]=='B')
			s[i+1]='R';
		}
	}
	cout<<c<<endl<<s;
	return 0;
}