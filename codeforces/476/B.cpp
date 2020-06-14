#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,s1;
	cin >> s>>s1;
	long long int l=s.length(),d=0,c1=0,c2=0,q=0,p=0,n=0;
	long double pr=1,q1=1,p1=1,n1=1;
	for(int i=0;i<l;i++){
		if(s[i]=='+')
		c1++;
		if(s[i]=='-')
		c1=c1-1;
		if(s1[i]=='+')
		c2++;
		if(s1[i]=='-')
		c2--;
		if(s1[i]=='?')
		q++;
	}
	d=(c1-c2);
	if(abs(d)>q)
	pr=0;
	else if(q==0)
	pr=1;
	else{
		int y=q;
		p=(q+d)/2;
		n=(q-d)/2;
		while(q>=1){
			q1=q1*q;
			q--;
		}
		while(p>=1){
			p1=p1*p;
			p--;
		}
		while(n>=1){
			n1=n1*n;
			n--;
		}
		pr=(q1/n1)/p1;
		pr=pr/(pow(2,y));
	}
	cout<<setprecision(12)<<pr;
	return 0;
}