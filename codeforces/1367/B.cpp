#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int p=0;p<t;p++){
		int n,e=0,o=0,q=0,w=0,z=0;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
		cin >> a[i];
		for(int i=0;i<n;i++){
		if(i%2==0 || i==0){
			if(a[i]%2==1)
			e++;}
		if(i%2==1){
			if(a[i]%2==0)
			o++;}
		}
		if(e!=o)
		cout<<"-1\n";
		if(e==o)
		cout<<e<<endl;
	}
	return 0;
}