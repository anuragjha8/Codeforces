#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	for(int j=0;j<t;j++){
		long long int n,a=0,b=0,f1=0,f2=0,m=0,h=0,h1=0;
		cin >> n;
			for(int i=2;i*i<=n;i++){
				if(n%i==0){
				m++;
				f1=i;
				f2=n/i;
				h=__gcd(f1,n-f1);
				if(h>m){
				a=f1;
				m=h;}
				h1=__gcd(f2,n-f2);
				if(h1>m){
					a=f2;
					m=h1;}}}
				/*if(f1>=f2){
				if((n-i>=i &&  (n-i)%i==0)||(i>n-i && n-i%i==0)){
					a=i;
					b=n-i;}
			}
			else{
				if(((n-f2)>=f2 && (n-f2)%f2==0)||(f2>(n-f2) && f2%(n-f2))){
					a=f2;
					b=n-f2;}
			}
		}}*/
			b=n-a;
			if(m==0){
				a=1;
				b=n-1;
			}
		cout<<a<<" "<<b<<endl;
	}
	return 0;
}