#include <iostream>
using namespace std;

int main() {
	string a;
	cin >> a;
	int l=a.length(),c=0;
	if(l>6){
		for(int i=0;i<l-6;i++){
			if(a[i]==a[i+1] && a[i]==a[i+2] && a[i]==a[i+3] && a[i]==a[i+4] && a[i]==a[i+5] && a[i]==a[i+6]){
			c=1;
			break;}
		}
	}
	if(c==1)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}