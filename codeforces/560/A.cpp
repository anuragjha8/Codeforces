#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long int s,a[n];
	for(int i=0;i<n;i++)
	cin >> a[i];
	sort(a,a+n);
	if(a[0]==1)
	cout<<"-1";
	else{
		cout<<"1";
	}
	return 0;
}