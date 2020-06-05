#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int j=0;j<t;j++){
		char a[9][9];
		for(int i=0;i<9;i++){
		for(int k=0;k<9;k++)
		cin >> a[i][k];}
		for(int i=0;i<9;i++){
		for(int k=0;k<9;k++){
			if(a[i][k]=='1')
			a[i][k]='2';
		}
		
	}
	for(int i=0;i<9;i++){
		for(int k=0;k<9;k++)
			cout<<a[i][k];
			cout<<endl;
	}}
	return 0;
}