#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >>t;
	while (t--){
		int n,j=0,k=0;
		cin >> n;
		long long int a[n],s=0,s1=0,m=0,s2=0;
		cin >>s;
		for(int i=0;i<n;i++){
		cin >>a[i];
		s2+=a[i];}
		for (int i=0;i<n;i++){
			s1+=a[i];
			if(a[i]>m){
				m=a[i];
				j=i;
			}
			if(s1>s){
				s1-=a[i];
				k=i;
				break;
			}
		}
		if(s2<=s || s1-a[j]+a[k]>s)
		cout<<"0\n";
		else
		cout<<j+1<<endl;
	}
	return 0;
}