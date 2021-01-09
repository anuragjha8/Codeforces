#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >>t;
	while(t--){
		int n,x=0,y=0,z=0,w=0;
		cin >>n;
		char a[n+1][n+1];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++)
			cin >>a[i][j];
		}
		char c,c1,c2,c3;
		c=a[2][1];
		c1=a[1][2];
		c2=a[n-1][n];
		c3=a[n][n-1];
		if(c==c1 && c2!=c3){
			cout<<"1\n";
			if(c2!=c)
			cout<<n<<" "<<n-1<<endl;
			else
			cout<<n-1<<" "<<n<<endl;
		}
		else if(c!=c1 && c2==c3){
			cout<<"1\n";
			if(c2!=c)
			cout<<"1 2\n";
			else
			cout<<"2 1\n";
		}
		else if(c!=c1 && c2!=c3){
			cout<<"2\n";
			if(c1!=c2)
			cout<<"1 2\n"<<n-1<<" "<<n<<endl;
			else
			cout<<"1 2\n"<<n<<" "<<n-1<<endl;
		}
		else if(c==c1 && c3==c2 && c==c3){
			cout<<"2\n";
			cout<<"1 2\n";
			cout<<"2 1\n";
		}
		else if(c==c1 && c3==c2 && c!=c3){
			cout<<"0\n";
		}
	}
	return 0;
}