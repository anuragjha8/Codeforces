#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	for(int j=0;j<t;j++){
	int n,q=0,z=0;
	string s,s1="1",s2="1";
	char c1='0',c2='0';
	cin >> n >>s;
	for(int i=1;i<n;i++){
		if(s[i]=='1'){
		c1='1';
		c2='0';
		s1=s1+c1;
		s2=s2+c2;
		q=1;
		z=i;
		break;}
		if(s[i]=='0'){
		c1='0';
		c2='0';}
		if(s[i]=='2'){
		c1='1';
		c2='1';}
		s1=s1+c1;
		s2=s2+c2;
	}
	if(q==1){
		for(int i=z+1;i<n;i++){
			c1='0';
			c2=s[i];
			s1=s1+c1;
			s2=s2+c2;
	}}
	cout<<s1<<endl<<s2<<endl;
	}
	return 0;
}