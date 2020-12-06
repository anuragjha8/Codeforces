#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string a;
	cin >> a;
	long long int s=0,l=0,c=0;
	l=a.length();
	if(l==1)
	c=-1;
	for(int i=0;i<l;i++)
		s+=(a[i]-'0');
	a=to_string(s);
	s=0;
	while(a.length()>1){
		c++;
		for(int i=0;i<a.length();i++)
			s+=(a[i]-'0');
		a=to_string(s);
		s=0;
	}
	cout<<c+1;
	return 0;
}