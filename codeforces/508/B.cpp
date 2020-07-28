#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int l=s.length();
	int c=0,z=0;
	for(int i=0;i<l;i++){
		if(s[i]=='0' || s[i]=='2' || s[i]=='4' || s[i]=='6' || s[i]=='8'){
		c++;
		z=i;}
	}
	if(c==0)
	cout<<"-1";
	else if(c==1){
		char c=s[l-1];
		s[l-1]=s[z];
		s[z]=c;
		cout<<s;
	}
	else{
		//int w=stoi(s[l-1]);
		int y=0;
		for(int i=0;i<l;i++){
			int q=s[i]-'0';
			if(s[i]<s[l-1] && q%2==0){
				y=1;
				swap(s[i],s[l-1]);
				break;
			}
		}
		if(y==0)
		swap(s[z],s[l-1]);
		cout<<s;
	}
	return 0;
}