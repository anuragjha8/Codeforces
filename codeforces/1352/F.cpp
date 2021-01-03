#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--){
		int a,b,c,x=0;
		cin >>a>>b>>c;
		string s="";
		for(int i=0;i<b;i++){
			if(i%2==0)
			s+='0';
			else
			s+='1';}
		if(b%2==1){
			for(int i=0;i<a;i++)
			s+='0';
			for(int i=0;i<=c;i++)
			s+='1';
			if(c==0 && a!=0)
			s[a+b+c]='0';
		}
		else{
			for(int i=0;i<c;i++)
			s+='1';
			for(int i=0;i<=a;i++)
			s+='0';
			if(a==0 && c!=0)
			s[a+b+c]='1';
		}
		for(int i=1;i<=a+b+c;i++){
			if(s[i]!=s[i-1])
			x++;
		}
		if(x!=b){
			if(s[a+b+c]=='0')
			s[a+b+c]='1';
			else
			s[a+b+c]='0';
		}
		cout<<s<<endl;
	}
	return 0;
}