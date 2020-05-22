#include <iostream>
using namespace std;

int main() {
	int l,n;
	cin >> l>>n;
	if(l==1 && n==10)
	cout<<"-1";
	
	else if(n!=10){
			cout<<n;
		for(int i=0;i<l-1;i++)
		cout<<"0";
	}
	else if(n==10){
			cout<<n;
		for(int i=0;i<l-2;i++)
		cout<<"0";
	}
	return 0;
}