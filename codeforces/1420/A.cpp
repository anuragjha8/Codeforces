#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	int n,c=0;
	cin >> n;
	long long int a[n],b[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	/*	b[i]=a[i];
		s.insert(a[i]);
	}
	int l=s.size();
	sort(b,b+n);
	reverse(b,b+n);
	for(int i=0;i<n;i++){
		if(a[i]==b[i])
		c++;
	}
	if(c==n && l!=1)*/
	for(int i=0;i<n-1;i++){
		if(a[i]<=a[i+1]){
			c=1;
			break;
		}
	}
	if(c==1)
	cout<<"YES\n";
	else
	cout<<"NO\n";

	
	}
	return 0;
}