#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	for(int j=0;j<t;j++){
		int l,c=0,a,b,q=98,z=0;
		cin >> l>>a>>b;
	/*	if(a==b){
			for(int i=0;i<l;i++){
			if(q>122)
			q=q-25;
			char v=(char)q;
			cout<<v;
			q++;
		}}
		else if(a==l && b==1){
			for(int i=0;i<l;i++)
			cout<<"a";
		}
	else if(a!=b){*/
	while(c<l){
			int x=97;
		for(int i=0;i<b;i++){
			char y=(char)x;
			cout<<y;
			x++;
			c++;
			if(c==l)
			break;
		}
		
	}
	//}
		cout<<endl;
	}
	return 0;
}