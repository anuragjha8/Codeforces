#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,c=0,p=1;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n);
	for(int i=0;i<n;i++){
		if(a[i]>=p)
		p++;
	}
	cout<<p-1<<endl;
	return 0;
}