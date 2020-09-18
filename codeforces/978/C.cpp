#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >>n>>m;
	long long int a[n],s[n],x,z=0;
	for(int i=0;i<n;i++)
	cin >> a[i];
	s[0]=a[0];
	for(int i=1;i<n;i++)
	s[i]=a[i]+s[i-1];
	while(m--){
		cin >>x;
		/*long long int l=0,r=n,z=0,mid=0;
		if(x<=s[0]){
			mid=0;
		}
		else{
		while(l<r){
			mid=(l+r)/2;
			if(s[mid]==x)
				break;
			else if(mid>0 && s[mid]>x && s[mid-1]<x )
			break;
			else if(mid==0 && s[1]>x )
			break;
			if(x>s[mid])
			l=mid+1;
			else
			r=mid-1;
		}}*/
		long long int mid=lower_bound(s,s+n,x)-s;
		cout<<mid+1<<" ";
		if(mid==0)
		z=x;
		else
		z=x-s[mid-1];
		cout<<z<<endl;
	}
	return 0;
}
