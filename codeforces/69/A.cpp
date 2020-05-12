#include <iostream>
using namespace std;

int main() {
	int n,s=0,c=0;
	cin >> n;
	int a[n][3];
	for(int i=0;i<n;i++){
	for(int j=0;j<3;j++)
	cin >> a[i][j];
	}
	for(int j=0;j<3;j++){
		s=0;
	for(int i=0;i<n;i++)
		s=s+a[i][j];
		if(s==0)
		c++;}
		if(c==3)
		cout<<"YES";
		else
		cout<<"NO";
	return 0;
}