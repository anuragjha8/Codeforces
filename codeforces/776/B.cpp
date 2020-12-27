#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >>n;
	long long int a[n+2],c[n+2]={},m=0;
	for(int i=2;i<=n+1;i++)
	c[i]=2;
	c[2]=1;
	c[3]=1;
	for(int i=3;i<=n+1;i++){
			int q=0;
			for(int j=2;j*j<=i;j++){
			if(i%j==0){
				q++;
				break;}}
			if(q==0)
			c[i]=1;
		}
	for(int i=2;i<=n+1;i++)
	m=max(m,c[i]);
	cout<<m<<endl;
	for(int i=2;i<=n+1;i++)
	cout<<c[i]<<" ";
	return 0;
}