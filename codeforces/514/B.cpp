#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,c=0,c1=0,a=0;
	double x,y,x1,y1;
	cin >> t>>x>>y;
	double m=0;
	set<double>s;
	while(t--){
		cin >> x1>>y1;
		if(x==x1)
		c=1;
		else if(y==y1)
		c1=1;
		else{
			m=(y-y1)/(x-x1);
			s.insert(m);
		}
	}
	a=s.size();
//	cout<<a<<" "<<c<<" "<<c1;
	a=a+c+c1;
	cout<<a;
	return 0;
}