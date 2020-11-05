#include <bits/stdc++.h>
using namespace std;

int main() {
		int n,c=0,s=0;
		cin >> n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
		cin >> a[i];
		b[i]=a[i]/2;
		s+=b[i];
		}
		for(int i=0;i<n;i++){
			if(s<0 && abs(a[i])%2==1 && a[i]>0){
				b[i]+=1;
				s++;}
			if(s>0 && abs(a[i])%2==1 && a[i]<0){
				b[i]-=1;
				s--;}
			if(s==0)
			break;
		}
		for(int i=0;i<n;i++)
		cout<<b[i]<<endl;
	return 0;
}