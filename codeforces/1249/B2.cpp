#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--){
	int n,f=1,c=0;
	cin >> n;
	int a[n+1],b[n+1]={};

	for(int i=1;i<=n;i++)
	cin >> a[i];
	for(int i=1;i<=n;i++){
		int x=a[i];
		vector<int>v;
		v.push_back(i);
		if(b[i])
		continue;
		while(i!=x){
			c++;
			v.push_back(x);
			x=a[x];
			}
		for(int i:v){
			b[i]=c;
		}
		
		c=0;
	}
	for(int i=1;i<=n;i++)
	cout<<b[i]+1<<" ";
	cout<<endl;
	}
	return 0;
}