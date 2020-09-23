#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	string s,s1="";
	cin >> s;
	int f[26]={},v[26]={};
	int l=s.length();
	for(int i=0;i<l;i++){
	f[s[i]-'a']++;
	if(((i<l-1 && s[i]!=s[i+1])||(i==l-1)) && f[s[i]-'a']%2==1 && v[s[i]-'a']==0){
	s1=s1+s[i];
	v[s[i]-'a']=1;}}
	/*for(int i=0;i<26;i++){
		if(f[i]%2==1)
		cout<<(char)(i+97);
	}*/
	sort(s1.begin(),s1.end());
	cout<<s1<<endl;
	}
	return 0;
}