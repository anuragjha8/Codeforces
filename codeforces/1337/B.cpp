#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int j=0;j<t;j++){
		int h,x,y,c=0,q=0,w=0,z=0;
		cin>>h>>x>>y;
		while(c<=x+y){
			if(h>20 && q<x){
			h=(h/2) + 10;
			q++;}
			else if(w<y){
			h=h-10;
			w++;}
			c++;
				if(h<=0){
				z=1;
				break;}
		}
		if(z==1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}