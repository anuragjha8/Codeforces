#include <bits/stdc++.h>
using namespace std;
#define int long long

signed  main() {
	int t,c=1;
	cin >> t;
	string a;
	set<string>s;
	map<string,int>m;
	while(t--){
		cin >>a;
		if(s.find(a)==s.end()){
			m[a]=0;
			s.insert(a);
			cout<<"OK\n";
		}
		else{
			string s1=a;
			m[a]++;
			s1+=to_string(m[a]);
			m[s1]=0;
			s.insert(s1);
			cout<<s1<<endl;
		}
	}
	return 0;
}