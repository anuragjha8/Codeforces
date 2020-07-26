#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	int n,f=1,c=0;
	cin >> n;
	int a[n+1];
	for(int i=1;i<=n;i++)
	cin >> a[i];
	for(int i=1;i<=n;i++){
		int t=a[i];
		while(i!=t){
			c++;
			t=a[t];
		}
		cout<<c+1<<" ";
		c=0;
	}
	cout<<endl;
	}
	return 0;
}