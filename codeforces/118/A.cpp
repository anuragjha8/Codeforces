#include <iostream>
using namespace std;

int main() {
	string a,s="";
	cin >> a;
	int l=a.length();
	for(int i=0;i<l;i++){
		int z=(int)a[i];
	if(z<=90){
	z=z+32;
	a[i]=(char)z;
	}
	if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' && a[i]!='y')
	s=s+"."+a[i];}
	cout<<s;
	return 0;
}