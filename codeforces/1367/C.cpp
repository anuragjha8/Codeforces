#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int p=0;p<t;p++){
		int n,q=0,k,f=0,m=0,c=0,x=0,y=0,z=0;
		cin >> n>>k;
		string s;
		cin >> s;
		for(int i=0;i<n;i++){
			if(s[i]=='1')
			m++;
			}
		int b[m];
		if(m>0){
			for(int i=0;i<n;i++){
			if(s[i]=='1'){
			b[q]=i;
			q++;}}
			for(int i=1;i<m;i++){
			z=((b[i]-b[i-1])/(k+1))-1;
			c=c+z;}
			for(int i=b[0]-1;i>=0;i--){
				x++;
				if(x>k){
					y++;
					x=0;
				}}
				c=c+y;
				x=0;
				y=0;
			for(int i=b[m-1]+1;i<n;i++){
				x++;
				if(x>k){
					y++;
					x=0;
				}}
				c=c+y;
				x=0;
				y=0;
		}
		if(m==0){
			c=1;
			for(int i=1;i<n;i++){
				x++;
				if(x>k){
				c++;
				x=0;
			}
		}}
		cout<<c<<endl;
	}
	return 0;
}