#include <iostream>
using namespace std;

int main() {
	int n,x=0;
	cin >>n;
	for(int i=0;i<n;i++){
	string s;
	cin >> s;
	int p=0,z=0;
	for(int j=0;j<3;j++){
		if(s[j]=='+')
		p++;
		if(s[j]=='-')
		z++;	
	}
	if(p==2)
	x=x+1;
	if(z==2)
	x=x-1;
	p=0;
	z=0;
	}
	cout<<x;
	return 0;
}