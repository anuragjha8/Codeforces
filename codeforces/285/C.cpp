#include <bits/stdc++.h>
using namespace std;

int main() {
		int n;
		cin >> n;
		long long int a[n],d=0,s=0;
		for(int i=0;i<n;i++)
			cin >> a[i];
			sort(a,a+n);
			for(int i=0;i<n;i++){
			d=abs(i+1-a[i]);
			s=s+d;
		}
		cout<<s<<endl;
	return 0;
}