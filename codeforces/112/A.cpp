#include <iostream>
using namespace std;

int main() {
	string s,a;
	cin>>s>>a;
	int c1=0,c2=0,q=0,w=0,c=0;
	int l=s.length();
	for(int i=0;i<l;i++){
		q=(int)s[i];
		if(q>=65 && q<=90)
		q=q+32;
		c1=c1+q;
		w=(int)a[i];
		if(w>=65 && w<=90)
		w=w+32;
		c2=c2+w;
		if(c1>c2){
			c=1;
			break;
		}
			if(c1<c2){
			c=-1;
			break;
		}
	}
	cout<<c;
	return 0;
}