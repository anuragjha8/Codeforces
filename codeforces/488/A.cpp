#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long int n,x,y,c=0,q=0;
	int r=0;
	cin >>n;
	y=n+1;
	while(q==0){
		x=y;
	while(abs(x)>1){
		r=(abs(x))%10;
		if(r==8){
			q=1;
			cout<<(y-n);
			break;
		}
		x=x/10;
	}
	if(q==1)
	break;
	y++;
	}
	return 0;
}