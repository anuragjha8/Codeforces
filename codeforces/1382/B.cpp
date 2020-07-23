#include <bits/stdc++.h>
using namespace std;

int main() {
		int t;
	cin >> t;
	for(int o=0;o<t;o++){
	int n,c=0;
	cin >> n;
	long long int a[n];
	for(int i=0;i<n;i++)
	cin >> a[i];
	for(int i=0;i<n;i++){
		if(a[i]!=1){
			c=i+1;
			break;}
	}
	if(c>0){
	if(c%2==1)
	cout<<"First\n";
	else
	cout<<"Second\n";
	}
	else{
	if(n%2==1)
	cout<<"First\n";
	else
	cout<<"Second\n";
	}	
	}
	return 0;
}