#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int o=0;o<t;o++){
		long long int a,b,r=0,q=0,z=0,c=0;
		cin >> a>>b;
		if(b>a)
		swap(a,b);
		if(a==b)
		c=0;
		else{
			if(a%b!=0)
			c=-1;
			else{
				z=a/b;
				while(z>1){
					if(z%8==0){
						c++;
						z=z/8;}
					else if(z%4==0){
						c++;
						z=z/4;}
					else if(z%2==0){
						c++;
						z=z/2;}
					else{
						c=-1;
						break;}
				}}
	}
	cout<<c<<endl;
	}
	return 0;
}