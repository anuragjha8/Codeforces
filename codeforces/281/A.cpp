#include <iostream>
using namespace std;

int main() {
	string a;
	cin >> a;
	int l=a.length(),c=0;
	c=(int)a[0];
	if(c>=97)
	c=c-32;
	char q=(char)c;
	cout<<q;;
	for(int i=1;i<l;i++)
	cout<<a[i];
	return 0;
}