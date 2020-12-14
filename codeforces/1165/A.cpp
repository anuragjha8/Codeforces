#include<bits/stdc++.h>
using namespace std;

int main(){
	int l,x,y,c=0;
	cin >>l>>x>>y;
	string s,s1="",s2="";
	cin >>s;
	s1=s.substr(l-x,x);
	for(int i=0;i<x;i++){
		if(i==x-y-1 && s1[i]!='1')
		c++;
		else if(i!=x-y-1 && s1[i]!='0')
		c++;
	}
	cout<<c;
}
