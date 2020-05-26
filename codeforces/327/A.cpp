#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m=0,q=0,w=0,e=0,c=0;
	cin >>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[j]==1)
			q++;}
		for(int j=i;j<n;j++){
			for(int k=i;k<=j;k++){
				if(a[k]==0)
				c++;}
			for(int k=j+1;k<n;k++){
				if(a[k]==1)
				e++;}
				if(q+c+e>=m)
				m=q+c+e;
				c=0;e=0;
			}
			q=0;
		}
		if(n==1 && a[0]==1)
		m=0;
		if(n==1 && a[0]==0)
		m=1;
		cout<<m;
return 0;
}