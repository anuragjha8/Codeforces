#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,m,c=0,a=0;
	cin >> n>>m;
	if(m%n!=0)
	c=-1;
	else if(m==n)
	 c=0;
	 else{
	 	a=m/n;
	 	while(a!=1){
	 	/*if(m%9==0 && m/9>=n){
	 	c+=2;
	 	m=m/9;}
	 	else if(m%4==0 && m/4>=n){
	 	c+=2;
	 	m=m/4;}*/
	 	if(a%2==0){
	 	c++;
	 	a=a/2;}
	 	else if(a%3==0){
	 	c++;
	 	a=a/3;}
		else{
	 		c=-1;
	 		break;
	 	}
	 }}
	 cout<<c;
	return 0;
}