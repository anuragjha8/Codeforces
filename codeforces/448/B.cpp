#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string s,s1,s2="",s3="",s4="",s5="",s6="",s7="";
	int q=0,j=0,k=0;
	int l=0,l1=0;
	cin >> s>>s1;
	l=s.length();
	l1=s1.length();
	s2=s;
	s3=s1;
	sort(s2.begin(),s2.end());
	sort(s3.begin(),s3.end());
	for(int i=0;i<l;i++){
			if(s2[i]==s3[k]){
				s7+=s3[k];
				k++;
				if(k==l1)
				break;
			}}
	if(s2==s3)
	cout<<"array\n";
	else if(l>=l1){
		for(int i=0;i<l;i++){
			if(s[i]==s1[j]){
				s6+=s1[j];
				j++;
				if(j==l1)
				break;
			}}
		if(s6==s1)
		cout<<"automaton\n";
		else{
			sort(s7.begin(),s7.end());
			if(s7==s3){
				q=1;
				cout<<"both\n";
			}
		if(q==0)
		cout<<"need tree\n";}}
	else
		cout<<"need tree\n";
	return 0;
}