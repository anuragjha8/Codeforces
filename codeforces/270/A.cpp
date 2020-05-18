#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int j=0;j<t;j++){
		double x;
		int c=0;
		cin >> x;
		for(int i=3;i<5000;i++){
			if(180*(i-2)==i*x){
			c=1;
			break;
		}}
		if(c==1)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	return 0;
}