#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n;
	cin >> n;
	long long int a[n],l=0,x=1,y=1,p=0;
	for(int i=0;i<n;i++)
	cin >>a[i];
	sort(a,a+n);
	l=a[n-1]-a[0];
	cout<<l<<" ";
	for(int i=1;i<n;i++){
	if(a[i]==a[0])
	x++;
	else
	break;}
	for(int i=n-2;i>=0;i--){
	if(a[i]==a[n-1])
	y++;
	else
	break;}
	p=x*y;
	if(a[0]==a[n-1])
	p=n*(n-1)/2;
	cout<<p;
	return 0;
}