#include <bits/stdc++.h>
using namespace std;
#define int long long

signed  main() {
	int N,c=0,z,a,b,f=0,s=0;
	cin >>N;
	queue<int>x,y;
	int n,m;
	cin >>n;
	for(int i=0;i<n;i++){
		cin >>z;
		x.push(z);}
	cin >>m;
	for(int i=0;i<m;i++){
		cin >>z;
		y.push(z);}
	/*queue<int>w=x;
	queue<int>p=y;
	z=max(m,n);
	while(z--){
		c++;
		a=x.front();
		x.pop();
		b=y.front();
		y.pop();
		if(a>b){
			f++;
			x.push(b);
			x.push(a);
		}
		else{
			s++;
			y.push(a);
			y.push(b);
		}
		if(x.size()==0 || y.size()==0)
		break;
	}
	if(x==w && y==p)
	cout<<"-1";
	else{*/
		while(x.size()>0 && y.size()>0){
				c++;
		a=x.front();
		x.pop();
		b=y.front();
		y.pop();
		if(a>b){
			f++;
			x.push(b);
			x.push(a);}
		else{
			s++;
			y.push(a);
			y.push(b);}
		if(c>999999){
			c=-1;
			break;}
		}
		cout<<c<<" ";
		if(c!=-1){
		if(f>s)
		cout<<"1";
		else
		cout<<"2";}
	return 0;
}