#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long int a[n],s[n+1]={},sp[n+1]={},m[n+1]={},gm=0;
	for(int i=1;i<=n;i++){
		cin >> a[i-1];
		s[i]=s[i-1]+a[i-1];
		m[i]=max(s[i],m[i-1]);
	}
	for(int i=1;i<=n;i++){
		sp[i]=sp[i-1]+s[i];
		gm=max((sp[i-1]+m[i-1]),gm);
		gm=max(sp[i],gm);
	}
	cout<<gm;
	return 0;
}