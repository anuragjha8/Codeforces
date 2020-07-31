#include <bits/stdc++.h>
using namespace std;

int main() {
		int n,d=0,s=0;
		cin >> n;
		int a[n],f[10000]={};
		for(int i=0;i<n;i++){
		cin >> a[i];
		f[a[i]]++;}
		for(int i=1;i<10000;i++){
			if(f[i]>1){
			f[i+1]+=f[i]-1;
			s=s+f[i]-1;}
		}
		cout<<s;
	return 0;
}