#include <iostream>
using namespace std;

int main() {
	int n,k,c=0,q=0;
	cin >> n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	q=a[k-1];
	for(int i=0;i<n;i++){
	if(a[i]>=q && a[i]>0)
	c++;}
	cout<<c;
	return 0;
}