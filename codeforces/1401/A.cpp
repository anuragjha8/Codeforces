#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int a,b,s=0,q=0;
		cin >> a>>b;
		if(b>a)
		s=b-a;
		else{
			q=a-b;
			if(q%2==0)
			s=0;
			else
			s=1;
		}
		cout<<s<<endl;
	}
	return 0;
}