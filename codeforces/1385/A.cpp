#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int o=0;o<t;o++){
		long long int a,b,c,x=0,y=0,z=0,q=0,p=0,s[3]={};
		cin >> a>>b>>c;
		s[0]=a;
		s[1]=b;
		s[2]=c;
		sort(s,s+3);
		a=s[0];
		b=s[1];
		c=s[2];
		if(a!=b && a!=c && b!=c)
		q=1;
		else if(b==a && b!=c)
		q=1;
		else{
			x=a;
			y=a;
			z=c;
		}
		if(q==1)
		cout<<"NO\n";
		else
		cout<<"YES\n"<<x<<" "<<y<<" "<<z<<endl;
	//	cout<<a<<b<<c<<endl;
	}
	return 0;
}