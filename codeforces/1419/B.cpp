#include <bits/stdc++.h>
using namespace std;

int main(){
		long long int a[33]={},s[33]={},c=2,n=1;
		a[1]=1;
		s[1]=1;
	for(int i=1;i<=32;i++){
		n=(pow(2,i))-1;
		n=n*(n+1)/2;
		a[i]=n;
	}
	for(int i=2;i<=32;i++)
		s[i]=s[i-1]+a[i];
	int t;
	cin >> t;
	while(t--){
		long long int x;
		cin >> x;
		for(int i=1;i<33;i++){
			if(s[i]>x){
				cout<<i-1<<endl;
				break;
			}
		}
	}
	return 0;
}
