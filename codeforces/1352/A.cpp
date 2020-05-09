#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i=0;i<t;i++)
{
	int c=0;
	string s;
	cin >> s;
	int l=s.length();
	if(l==1 || s=="10")
	cout<<"1\n"<<s<<endl;
	else{
		for(int j=0;j<l;j++){
			if(s[j]!='0')
			c++;
		}
		cout<<c<<endl;
		for(int j=0;j<l;j++){
			if(s[j]!='0'){
			cout<<s[j];
			for(int k=j+1;k<l;k++)
			cout<<"0";

		cout<<" ";
	}}
	cout<<endl;
}
}
	return 0;
}
