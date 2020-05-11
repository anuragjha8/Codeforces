#include <iostream>
using namespace std;

int main() {
	int a[5][5],x=0,y=0;
	for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		cin >> a[i][j];
		if(a[i][j]==1){
			x=i;
			y=j;
		}}
	}
	x=x-2;
	if(x<0)
	x=x*-1;
	y=y-2;
	if(y<0)
	y=y*-1;
	cout<<x+y;
	return 0;
}