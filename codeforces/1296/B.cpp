#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	for(int j=0;j<t;j++){
	long long int n,c=0,z=0;
	cin >>n;
	c=n;
	while(n>=10){
		//c=c+(n+(n%10))/10;
		//n=n/10;
		//c=c+n/10;
		//n=(n+(n%10))/10;
		z=n/10;
		c=c+z;
		n=n/10 + n%10;
		}
	//c=n+(n/10)+((n/10 + n%10)/10);
	cout<<c<<endl;
	}
	return 0;
}