#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int a,b,s=0,c=0;
	cin >> a>>b;
	if(b==1)
	cout<<a;
	else{
		while (a > 0 && b > 0){
    if (a >= b){
        c = c + a/b;
        a = a%b;}
    else{
        c = c + b/a;
        b = b%a;}}
        cout<<c;
	}
	return 0;
}