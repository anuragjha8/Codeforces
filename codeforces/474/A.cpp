#include <bits/stdc++.h>
using namespace std;

int main() {
	char c;
	cin >> c;
	string s;
	cin >> s;
	int l=s.length();
	if(c=='R'){
	for(int i=0;i<l;i++){
		if(s[i]=='w')
		s[i]='q';
		if(s[i]=='e')
		s[i]='w';
		if(s[i]=='r')
		s[i]='e';
		if(s[i]=='t')
		s[i]='r';
		if(s[i]=='y')
		s[i]='t';
		if(s[i]=='u')
		s[i]='y';
		if(s[i]=='i')
		s[i]='u';
		if(s[i]=='o')
		s[i]='i';
		if(s[i]=='p')
		s[i]='o';
		if(s[i]=='[')
		s[i]='p';
		if(s[i]=='s')
		s[i]='a';
		if(s[i]=='d')
		s[i]='s';
		if(s[i]=='f')
		s[i]='d';
		if(s[i]=='g')
		s[i]='f';
		if(s[i]=='h')
		s[i]='g';
		if(s[i]=='j')
		s[i]='h';
		if(s[i]=='k')
		s[i]='j';
		if(s[i]=='l')
		s[i]='k';
		if(s[i]==';')
		s[i]='l';
		if(s[i]=='x')
		s[i]='z';
		if(s[i]=='c')
		s[i]='x';
		if(s[i]=='v')
		s[i]='c';
		if(s[i]=='b')
		s[i]='v';
		if(s[i]=='n')
		s[i]='b';
		if(s[i]=='m')
		s[i]='n';
		if(s[i]==',')
		s[i]='m';
		if(s[i]=='.')
		s[i]=',';
		if(s[i]=='/')
		s[i]='.';
	}
	cout<<s;
	}
	if(c=='L'){
		for(int i=0;i<l;i++){
		if(s[i]=='q')
		cout<<"w";
		if(s[i]=='w')
		cout<<"e";
		if(s[i]=='e')
		cout<<"r";
		if(s[i]=='r')
		cout<<"t";
		if(s[i]=='t')
		cout<<"y";
		if(s[i]=='y')
		cout<<"u";
		if(s[i]=='u')
		cout<<"i";
		if(s[i]=='i')
		cout<<"o";
		if(s[i]=='o')
		cout<<"p";
		if(s[i]=='p')
		cout<<"[";
		if(s[i]=='a')
		cout<<"s";
		if(s[i]=='s')
		cout<<"d";
		if(s[i]=='d')
		cout<<"f";
		if(s[i]=='f')
		cout<<"g";
		if(s[i]=='g')
		cout<<"h";
		if(s[i]=='h')
		cout<<"j";
		if(s[i]=='j')
		cout<<"k";
		if(s[i]=='k')
		cout<<"l";
		if(s[i]=='l')
		cout<<";" ;
		if(s[i]=='z')
		cout<<"x";
		if(s[i]=='x')
		cout<<"c";
		if(s[i]=='c')
		cout<<"v";
		if(s[i]=='v')
		cout<<"b";
		if(s[i]=='b')
		cout<<"n";
		if(s[i]=='n')
	cout<<"m";
		if(s[i]=='m')
	cout<<"," ;
		if(s[i]==',')
		cout<<".";
		if(s[i]=='.')
		cout<<"/";
		}
	}
	
	return 0;
}