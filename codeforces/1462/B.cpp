#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=1;
	cin >>t;
	while(t--){
		int n,c=0,q=0;
		cin >> n;
		string s,s1="";
		cin >>s;
		for(int i=0;i<=4;i++){
			s1=s.substr(0,i)+s.substr(n-4+i);
			//cout<<s1<<endl;
			if(s1=="2020")
			q=1;
		}
		if(q==1)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	return 0;
}