#include <iostream>
using namespace std;

int main() {
	string s,a="";
	cin >> s;
	int l=s.length();
	if(l==1)
	cout<<s;
	else{
		for(int i=0;i<l;i++){
			if(s[i]=='1')
			a=a+"1+";
		}
		for(int i=0;i<l;i++){
			if(s[i]=='2')
			a=a+"2+";
			
		}
		for(int i=0;i<l;i++){
			if(s[i]=='3')
			a=a+"3+";
		}
		for(int i=0;i<l;i++)
		cout<<a[i];
	}
	return 0;
}