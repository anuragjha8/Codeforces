#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=1;
	cin >>t;
	while(t--){
		int n;
		cin >> n;
		long long int a[n],b[n]={},s1=0,s2=0,r=0;
		for(int i=0;i<n;i++){
			cin >>a[i];
			if(i%2==0)
			s1+=a[i];
			else
			s2+=a[i];
			//b[i]=a[i];
		}
		if(s1>=s2){
			for(int i=1;i<n;i+=2)
			a[i]=1;
		}
		else{
			for(int i=0;i<n;i+=2)
			a[i]=1;
		}
		for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}