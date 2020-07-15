#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n],f[1001]={},m=0,c=0,mx=0;
	for(int i=0;i<n;i++){
		cin >> a[i];
		f[a[i]]++;
		if(a[i]>m)
		m=a[i];
	}
	for(int i=1;i<=m;i++){
		if(f[i]>=1)
		c++;
		if(f[i]>mx)
		mx=f[i];
	}
	cout<<mx<<" "<<c;
	return 0;
}