#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
	int n,c=0,m,x=0,y=0;
	cin >> n;
	int a[n];
	//vector<int>v;
	for(int i=0;i<n;i++)
	cin >> a[i];
	
	if(a[0]>a[n-1])
	cout<<"NO\n";
	else
	cout<<"YES\n";
	}
	return 0;
}
