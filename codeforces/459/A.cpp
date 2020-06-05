#include <bits/stdc++.h>
using namespace std;

int main() {
	int x1,x2,y1,y2,d=0,z=0;
	cin >> x1>>y1>>x2>>y2;
	int x3=x1,x4=x2,y3=y1,y4=y2;
	if(y1==y2 && x2>x1){
		d=x2-x1;
		y4=y2-d;
		y3=y1-d;
	}
	else if(y1==y2 && x2<x1){
		d=x1-x2;
		y4=y2-d;
		y3=y1-d;
	}
	else if(x1==x2 && y2<y1){
		d=y1-y2;
		x4=x2-d;
		x3=x1-d;
	}
	else if(x1==x2 && y2>y1){
		d=y2-y1;
		x4=x2-d;
		x3=x1-d;
	}
	else if(abs(x2-x1) == abs(y2-y1)){
		x3=x2;
		y3=y1;
		x4=x1;
		y4=y2;
	}
	else
	z=1;
	if(z==0)
	cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
	if(z==1)
	cout<<"-1";
	return 0;
}