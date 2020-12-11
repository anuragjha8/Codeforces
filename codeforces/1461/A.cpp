#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=1;
	cin >>t;
	while(t--){
		int n,k,q=0;
		cin >>n>>k;
		string s="";
		for(int i=0;i<k;i++)
			s+='a';
		for(int i=k;i<n;i++){
			q=(i-k)%3;
			if(q==0)
			s+='b';
			else if(q==1)
			s+='c';
			else
			s+='a';
			}
		cout<<s<<endl;
	}
	return 0;
}