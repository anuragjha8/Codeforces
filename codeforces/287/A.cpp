#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	char a[4][4];
	int q=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
			cin>>a[i][j];
		}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			int x=0;
			if(a[i][j]=='#')
			x++;
			if(a[i+1][j]=='#')
			x++;
			if(a[i][j+1]=='#')
			x++;
			if(a[i+1][j+1]=='#')
			x++;
			if(x!=2)
			q=1;
		}
	}
	if(q==1)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}