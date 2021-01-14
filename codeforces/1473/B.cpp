#include <bits/stdc++.h>
using namespace std;
#define int long long

signed  main() {
	int t=1;
	cin >>t;
	while(t--){
		string s,s1,s3="",s4="",s5="";
		cin >>s>>s1;
		int l=s.length();
		int l1=s1.length();
		for(int i=1;i<=l;i++){
			int q=0;
			s3=s.substr(0,i);
			for(int j=0;j<l;j+=i){
				s4=s.substr(j,i);
				if(s4!=s3)
				q++;
			}
			if(q==0)
			break;
		}
		for(int i=1;i<=l1;i++){
			int w=0;
			s3=s1.substr(0,i);
			for(int j=0;j<l1;j+=i){
				s5=s1.substr(j,i);
				if(s5!=s3)
				w++;
			}
			if(w==0)
			break;
		}
		if(s4!=s5)
		cout<<"-1\n";
		else{
			int x=l/s4.length();
			int y=l1/s5.length();
			int z=x*y/(__gcd(x,y));
			for(int i=0;i<z;i++)
			cout<<s4;
			cout<<endl;
		}
	}
	return 0;
}