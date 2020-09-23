#include <bits/stdc++.h>
using namespace std;

int main() {
	int l,r,c1=0,c2=0,d=0;
	cin >>l>>r;
	d=r-l;
	if(l==r)
	cout<<l;
	else{
	if(d<30){
		for(int i=l;i<=r;i++){
			if(i%2==0)
			c1++;
			if(i%3==0)
			c2++;
		}
		if(c1>c2)
		cout<<"2";
		else
		cout<<"3";
	}
	else
	cout<<"2";
	}
	return 0;
}