#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=1;
	cin >>t;
	while(t--){
		int n,m=0,z=0;
		cin >>n;
		long long int a[n],s=0;
		for(int i=0;i<n;i++){
		cin >> a[i];
		s+=a[i];
		}
		for(int i=1;i<=n;i++){
			if(s%i==0){
				int q=0;
				int x=s/i;
				long long int s2=0;
				for(int j=0;j<n;j++){
					s2+=a[j];
					if(s2==x)
						s2=0;
					else if(s2>x){
						q=-1;
						break;}
					}
				if(q==-1)
				continue;
				m=i;
			}}
		cout<<n-m<<endl;
	}
	return 0;
}