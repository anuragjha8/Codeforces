#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,t,s=0,s1=0,c=0,z=0,d1=0;
	cin >> n >>t;
	int a[n],b[n];
//	vector<int>v;
	for(int i=0;i<n;i++)
		cin >> a[i]>>b[i];
	for(int i=0;i<n;i++){
		s+=a[i];
		s1+=b[i];
	}
	if(t>=s && t<=s1){
		int d=t-s;
		cout<<"YES\n";
		for(int i=0;i<n;i++){
			d1=b[i]-a[i];
			if(d1<=d){
				c=a[i]+d1;
			cout<<c<<" ";
			d=d-d1;
		}
		else if(d>0){
			cout<<a[i]+d<<" ";
			d=0;}
		else
		cout<<a[i]<<" ";
	}}
	else
	cout<<"NO\n";
	return 0;
}
/*	for(int i=0;i<d;i++){
		if(s+b[i]<=t){
			s=s+b[i];
			v.push_back(b[i]);
		}
		else if(t-s<a[i]){
			z=1;
			break;
		}
		else if(s+b[i]>t && s+a[i]<t){
			v.push_back(t-s);
			s=t;}
		else if(s==t)
			v.push_back(0);
	}
	if(z==1 || s!=t)
	cout<<"NO";
	else{
		cout<<"YES\n";
		for(int i=0;i<v.size();i++)
			cout<<v[i]<<" ";
	}*/