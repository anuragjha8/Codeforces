#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long int a[n],b[n-1],c[n-2],z=0;
	for(int i=0;i<n;i++)
	cin >> a[i];
	for(int i=0;i<n-1;i++)
		cin >>b[i];
		for(int j=0;j<n-2;j++)
		cin >> c[j];
		sort(a,a+n);
		sort(b,b+n-1);
		sort(c,c+n-2);
	for(int i=0;i<n;i++){
		if(i==n-1){
		cout<<a[i]<<endl;
		break;}
		if(a[i]!=b[i]){
			cout<<a[i]<<endl;
			break;
		}}
		for(int i=0;i<n-1;i++){
		if(i==n-2){
		cout<<b[i]<<endl;
		break;}
		if(b[i]!=c[i]){
			cout<<b[i]<<endl;
			break;
		}}

	return 0;
}