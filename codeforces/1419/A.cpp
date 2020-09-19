#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,o=0,e=0,q=2,c1=0,c2=0;
		cin >> n;
		string s;
		cin >> s;
		/*if(n==1){
			if(s[0]=='1' || s[0]=='3' || s[0]=='5' || s[0]=='7' || s[0]=='9')
			q=1;
			else
			q=2;}
		else{*/
		for(int i=0;i<n;i++){
			if(i%2==0 && (s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9'))
			c1++;
			if(i%2==1 && (s[i]=='2' || s[i]=='4' || s[i]=='6' || s[i]=='8' || s[i]=='0'))
			c2++;
		}
	/*	if(c1>0 || c2==n/2)
		q=1;
	}*/
	if((n%2==1 && c1>0)||(n%2==0 && c2==0))
	q=1;
	cout<<q<<endl;
	}
	return 0;
}
