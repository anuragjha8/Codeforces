#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
	int t=1;
	cin >> t;
	while(t--){
		int n,x,y,z,m=0,j=0,c=0;
		long long int s=0;
		cin >>n;
		z=n-1;
		int a[n+1],f[n+1]={};
		priority_queue<pair<int,int>>v;
		for(int i=1;i<=n;i++){
		cin >> a[i];
		s+=a[i];}
		while(z--){
			cin >>x>>y;
			f[x]++;
			f[y]++;		
		}
		for(int i=1;i<=n;i++){
			if(f[i]>1)
			v.push({a[i],f[i]});
	    }
		cout<<s<<" ";
		while(c<n-2){
				pair<int,int> tp=v.top();
				v.pop();
				s+=tp.first;
				tp.second--;
				if(tp.second>1)
				v.push(tp);
			cout<<s<<" ";
			c++;
		}
		cout<<endl;
	}
	return 0;
}