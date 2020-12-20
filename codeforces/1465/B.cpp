#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		long long int n,x;
		cin >> n;
		while(1){
			x=n;
			int c=0,r=0,z=0;
			while(x>0){
				r=x%10;
				if(r!=0){
				z++;
				if(n%r==0){
				c++;
				x=x/10;}
				else
				break;}
				else
				x=x/10;
		    }
		    if(c==z){
		    	cout<<n<<endl;
		    	break;}
		    else 
		    	n++;
	    }
	}
	return 0;
}