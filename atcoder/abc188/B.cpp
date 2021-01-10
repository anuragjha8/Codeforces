#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >>n;
	long long int s=0;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	cin >>a[i];
	for(int j=0;j<n;j++)
	cin >>b[j];
	for(int i=0;i<n;i++){
		s+=(a[i]*b[i]);
	}
	if(s==0)
	cout<<"Yes";
	else
	cout<<"No";
	return 0;
}