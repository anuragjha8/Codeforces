#include <bits/stdc++.h>
using namespace std;

int main() {
	int c=0,q=0,w=0,e=0,r=0,z=0,t=0,y=0,u=0,o=0,p=0,a=0;
	string s;
	cin >> s;
	int l=s.length();
	for(int i=0;i<l-1;i++){
		if(s[i]=='A' && s[i+1]=='B' ){
		c++;
		q=i;
		w=i+1;
		break;}}
	for(int i=0;i<l-1;i++){
		if(s[i]=='B' && s[i+1]=='A' ){
		z++;
		e=i;
		r=i+1;}	
	}
	for(int i=0;i<l-1;i++){
		if(s[i]=='B' && s[i+1]=='A' ){
		t++;
		y=i;
		u=i+1;
		break;}}
	for(int i=0;i<l-1;i++){
		if(s[i]=='A' && s[i+1]=='B' ){
		o++;
		p=i;
		a=i+1;}	
	}
	if((c>=1 && z>=1 && w!=e && q!=r)||(t>=1 && o>=1 && y!=a && u!=p))
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}