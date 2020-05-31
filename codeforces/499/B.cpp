#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin >> n>>m;
	string s1[m],s2[m],s;
	for(int i=0;i<m;i++)
	cin >> s1[i] >> s2[i];
	for(int j=0;j<n;j++){
		int c=0;
		cin >> s;
		for(int i=0;i<m;i++){
			if(s1[i]==s){
				c=i;
				break;
			}
		}
		if((s1[c].length())<=(s2[c].length()))
		cout<<s1[c]<<" ";
		else
		cout<<s2[c]<<" ";
	}
	return 0;
}