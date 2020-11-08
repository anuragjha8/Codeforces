#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	int a=0,f[3]={},c=0;
	int l=s.size();
	for(int i=0;i<l;i++){
		a+=(s[i]-'0');
		f[(s[i]-'0')%3]++;
	}
	if(a%3==0)
	c=0;
	else if(a%3==1){
		if(f[1]>0 && l>1)
			c=1;
		else if(f[2]>1 && l>2)
		c=2;
		else 
		c=-1;
	}
	else if(a%3==2){
		if(f[2]>0 && l>1)
			c=1;
		else if(f[1]>1 && l>2)
		c=2;
		else 
		c=-1;
	}
	else
	c=-1;
	cout<<c;
	return 0;
}