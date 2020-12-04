#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		string s,s1="";
		cin >> s;
		s1=s;
		int l=s.length();
		int x=0;
		if(s[0]=='?'){
			if(s[1]=='a')
			s[0]='b';
			else if(s[1]=='b')
			s[0]='c';
			else
			s[0]='a';
		}
		for(int i=1;i<l-1;i++){
			if(s[i]!='?' && s[i]==s[i-1])
			x=-1;
			if(s[i]=='?'){
				if(s[i+1]=='?'){
				if(s[i-1]=='a')
					s[i]='b';
				else if(s[i-1]=='b')
					s[i]='c';
				else
					s[i]='a';
				}
				else{
				if(s[i-1]=='a' && s[i+1]=='a')
					s[i]='b';
				else if(s[i-1]=='a' && s[i+1]=='b')
					s[i]='c';
				else if(s[i-1]=='a' && s[i+1]=='c')
					s[i]='b';
				else if(s[i-1]=='b' && s[i+1]=='a')
					s[i]='c';
				else if(s[i-1]=='b' && s[i+1]=='b')
					s[i]='c';
				else if(s[i-1]=='b' && s[i+1]=='c')
					s[i]='a';
				else if(s[i-1]=='c' && s[i+1]=='a')
					s[i]='b';
				else if(s[i-1]=='c' && s[i+1]=='b')
					s[i]='a';
				else if(s[i-1]=='c' && s[i+1]=='c')
					s[i]='a';
				}
				
				}
			}
		if(s[l-1]=='?'){
			if(s[l-2]=='a')
					s[l-1]='b';
				else if(s[l-2]=='b')
					s[l-1]='c';
				else
					s[l-1]='a';
		}
		if(s[l-1]==s[l-2])
		x=-1;
		if(x==-1)
		cout<<x<<endl;
		else
		cout<<s<<endl;
	}
	return 0;
}