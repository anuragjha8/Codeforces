#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n,q=0,x=0,y=0;
		cin >>n;
		for(int i=1;i<=1e6;i++){
			if((i+1)*i/2>=n){
				q=i;
				break;
			}
		}
		x=q*(q+1)/2;
		if(x==n+1)
		q++;
		cout<<q<<endl;
	}
	return 0;
}