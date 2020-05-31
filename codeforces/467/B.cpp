#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,k;
	cin >>n>>m>>k;
	long long int a[m],z=0,f=0;
	for(int i=0;i<m;i++)
	cin >> a[i];
	//string s="",s1="";
	cin >>z;
/*	while(z>0){
		int r=z%2;
		char c='0'+r;
		s=c+s;
		z=z/2;
	}
	int l=s.length();
	for(int i=0;i<n-l;i++)
	s1=s1+'0';
	s=s1+s;*/
	for(int i=0;i<m;i++){
		long long int p=z ^ a[i],v=0;
	//	string s2="",s3="";
		int b=0;
		while(p>0){
		int r1=p%2;
		if(r1==1)
		v++;
		p=p/2;}
	/*	char c1='0'+r1;
		s2=c1+s2;
		a[i]=a[i]/2;
	}
	int l1=s2.length();
	for(int j=0;j<n-l1;j++)
	s3=s3+'0';
	s2=s3+s2;
	cout<<s2<<endl;
	for(int j=0;j<n;j++){
		if(s[i]!=s2[i])
		b++;
	}*/
	if(v<=k)
	f++;
	}
	//cout<<s<<endl;
	cout<<f;
	return 0;
}