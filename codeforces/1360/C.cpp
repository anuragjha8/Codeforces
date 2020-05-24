#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		int n,o=0,e=0,z=0;
		cin >>n;
		int a[n];
		for(int j=0;j<n;j++){
		cin >> a[j];
		if(a[j]%2==0)
		e++;
		else
		o++;}
		if(e%2==0 && o%2==0){
			z=1;
		}
		else if(e==0 || o==0)
		z=1;
		else{
		sort(a,a+n);
		for(int j=0;j<n-1;j++){
			if(a[j+1]-a[j]==1){
				if(e>0)
			e=e-1;
			if(o>0)
			o=o-1;
			if(e%2==0 && o%2==0){
			z=1;
		    break;}
		    else
		    j++;
		}
		}}
	if(z==1)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
		}
	return 0;
}