#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int a,b,m=0,c=0;
	cin >> a >> b;
	m=min(a,b);
	if(a==1 && b==1)
	cout<<"0";
	else{
	while(m>0){
		c++;
		if(a<=b){
		a=a+1;
		b=b-2;}
		else{
			a=a-2;
			b=b+1;
		}
		m=min(a,b);
	}
	cout<<c;
	}
	return 0;
}