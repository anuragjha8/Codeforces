#include <bits/stdc++.h>
using namespace std;

int main() {
		int n;
		cin >> n;
		long long int a[n],b[n],s=0;
		int d[n];
		for(int i=0;i<n;i++)
		cin >> a[i];
		for(int i=0;i<n;i++)
		cin >> b[i];
		for(int i=0;i<n;i++)
		d[i]=a[i]-b[i];
		sort(d,d+n);
			for(int i=0;i<n;i++){
				if(d[i]>0)
				s=s+n-i-1;
				else{
					int y=upper_bound(d+i,d+n,(0-d[i]))-d;
					s=s+n-y;
				}
				//cout<<s;
			}
		cout<<s;
	return 0;
}