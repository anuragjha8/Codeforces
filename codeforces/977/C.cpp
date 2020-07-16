#include <bits/stdc++.h>
using namespace std;

int main() {
	/*int t;
	cin >> t;
	for(int o=0;o<t;o++){*/
	long long int n,k,m=0,q=0;
	cin >> n>>k;
	int a[n];
	for(int i=0;i<n;i++){
	cin >>a[i];
	if(a[i]>m)
	m=a[i];}
	sort(a,a+n);
	for(int i=0;i<n;i++)
	q=a[k-1];
	if(a[k]==a[k-1])
	q=-1;
	if(k==0 && a[0]==1)
	q=-1;
	if(k==0 && a[0]>=2)
	q=1;
	cout<<q<<endl;
//	}
	return 0;
}