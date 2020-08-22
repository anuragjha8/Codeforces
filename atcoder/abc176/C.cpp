#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long int a[n],s=0,d=0;
	for(int i=0;i<n;i++)
	cin >> a[i];
	for(int i=1;i<n;i++){
		if(a[i]<a[i-1]){
			d=a[i-1]-a[i];
			s=s+d;
			a[i]=a[i-1];
		}
	}
	cout<<s;
	return 0;
}