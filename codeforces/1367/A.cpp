#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int o=0;o<t;o++){
		string b,a="";
		cin >> b;
		int l=b.length();
		for(int i=0;i<l;i++){
			if(i%2==0 || i==l-1)
			a=a+b[i];
		}
		cout<<a<<endl;
	}
	return 0;
}