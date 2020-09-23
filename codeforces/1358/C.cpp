#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	long long int x,y,x2,y2,r=0,d=0,m=0,c=1;
	long long int s=1;
	cin >> x >>y>>x2>>y2;
	/*if(x==x2 || y==y2)
	s=1;
	else{
		r=max((x2-x),(y2-y));
		d=min((x2-x),(y2-y));
		m=r+d;
		for(int i=m;i>r;i--){
		s=s*i/c;
		c++;
	}}*/
	s=(x2-x)*(y2-y);
	s=s+1;
	cout<<s<<endl;
	}
	return 0;
}