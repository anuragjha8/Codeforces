#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,z=0;
	cin >> t;
	int x,y;
	pair<int,int>a[t];
	for(int i=0;i<t;i++){
		
	cin >>x>>y;
	a[i]={x,y};
	}
	sort(a,a+t);
	for(int i=1;i<t;i++){
		if(a[i].second<a[i-1].second){
		z=1;
		break;}}
		if(z==1)
		cout<<"Happy Alex";
		else
		cout<<"Poor Alex";
	return 0;
}