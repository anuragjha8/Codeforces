#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	string s;
	cin >> s;
	int l=s.length();
	int z=0,o=0;
	for(int i=0;i<l;i++){
		if(s[i]=='1')
		o++;
		else
		z++;}
	int d_o=0,d_z=0,m=0;
	int q1=0,q2=0,m1=1000;
	for(int i=0;i<l;i++){
	for(int j=0;j<=i;j++){
		if(s[j]=='0')
		d_z++;
		else
		d_o++;}
		q1=d_z+o-d_o;
		q2=d_o+z-d_z;
		m=min(q1,q2);
	//	m=q1+q2;
		if(m<m1)
		m1=m;
		d_z=0;
		d_o=0;}
	//	m1=min(q1,q2);
		if(o==0 || z==0)
		m1=0;
		cout<<m1<<endl;
	}
	return 0;
}