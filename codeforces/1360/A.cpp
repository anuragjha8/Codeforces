#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int l,b,min=0,max=0,a=0;
		cin >>l>>b;
		if(l==b)
		a=4*l*b;
		else{
		if(l<b){
		min=l;
		max=b;}
		if(l>b){
		min=b;
		max=l;}
		if(max>2*min)
		a=max*max;
		else
		a=4*min*min;
		}
		cout<<a<<endl;
	}
	return 0;
}