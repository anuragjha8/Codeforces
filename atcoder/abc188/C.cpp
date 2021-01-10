#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,m,x=0,y=0,j=0;
	cin >>n;
	m=1<<n;
	int a[m];
	for(int i=0;i<m/2;i++){
		cin >>a[i];
		x=max(x,a[i]);
	}
	for(int i=m/2;i<m;i++){
		cin >>a[i];
		y=max(y,a[i]);
	}
	x=min(x,y);
	for(int i=0;i<m;i++){
		if(a[i]==x){
			j=i+1;
			break;
		}
	}
	cout<<j<<endl;
	return 0;
}