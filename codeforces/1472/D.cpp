#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
		int n,j=0,k=0;
		cin >>n;
		int a[n];
		long long int s=0,s1=0;
		for(int i=0;i<n;i++)
			cin >> a[i];
		sort(a,a+n);
		reverse(a,a+n);
		for(int i=0;i<n;i++){
			if(i%2==0){
				if(a[i]%2==0)
				s+=a[i];}
			if(i%2==1){
				if(a[i]%2==1)
				s1+=a[i];}
		}
		if(s>s1)
		cout<<"Alice\n";
		else if(s==s1)
		cout<<"Tie\n";
		else
		cout<<"Bob\n";
	}
	return 0;
}