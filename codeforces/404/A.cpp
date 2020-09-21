#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	char c[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
		cin >> c[i][j];
	}
	set<char>s1,s2;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j || i+j==n-1)
			s1.insert(c[i][j]);
			else
			s2.insert(c[i][j]);
		}
	}
	if(s1.size()==1 && s2.size()==1 && *s1.begin()!=*s2.begin())
	cout<<"YES\n";
	else
	cout<<"NO\n";
	return 0;
}