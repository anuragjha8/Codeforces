#include <bits/stdc++.h>
using namespace std;

int main() {
		long long int n,m,s=1;
		cin >>n;
		m=n;
		n--;
		while(n>0){
		s*=n;
		n--;}
		s=s*2/m;
		cout<<s<<endl;
	return 0;
}