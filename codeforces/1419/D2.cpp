#include <bits/stdc++.h>
using namespace std;

int main(){
		/*int t;
		cin >> t;
		while(t--){*/
			int n;
			cin >> n;
			long long int a[n],b[n]={};
			for(int i=0;i<n;i++)
				cin >> a[i];
		sort(a,a+n);
		vector<int>v;
		
		int l=0,r=(n/2),c=0,z=0;
		while(c<n){
			if(c%2==0){
			//cout<<a[r]<<" ";
			v.push_back(a[r]);
			r++;}
			else{
				//cout<<a[l]<<" ";
			v.push_back(a[l]);
			l++;}	
			c++;
		}
		for(int i=1;i<n-1;i++){
			if(v[i]<v[i-1] && v[i]<v[i+1])
			z++;
		}
		cout<<z<<endl;
		for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
	return 0;
}
