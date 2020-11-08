#include <iostream>
using namespace std;

int main() {
	int n,m=0,c=0;
	cin >> n;
	int a[n];
	int f[1001]={};
	for(int i=0;i<n;i++)
	cin >> a[i];
	for(int i=2;i<1001;i++){
		for(int j=0;j<n;j++){
			if(a[j]%i==0)
			c++;
		}
		f[i]=c;
		c=0;
	}
	for(int i=2;i<1001;i++){
		if(f[i]>m)
		m=f[i];
	}
	for(int i=2;i<1001;i++){
		if(f[i]==m){
		cout<<i;
		break;}
	}
	return 0;
}