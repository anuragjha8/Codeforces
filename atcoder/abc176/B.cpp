#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	long long int q=0,l,a=0;
	l=s.length();
	for(int i=0;i<l;i++){
		a=s[i]-'0';
		q=q+a;
	}
	if(q%9==0)
	cout<<"Yes";
	else
	cout<<"No";
	return 0;
}