#include <iostream>
using namespace std;

int main() {
	int n,k,c=0,s=0;
	cin >> n;
	int a[n][3];
	for(int i=0;i<n;i++){
	for(int j=0;j<3;j++){
		cin>>a[i][j];}}
	for(int i=0;i<n;i++){
	for(int j=0;j<3;j++){
		s=s+a[i][j];
	}
	if(s>=2)
	c++;
	s=0;
	}
	cout<<c;
	return 0;
}