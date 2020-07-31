#include <bits/stdc++.h>
using namespace std;

int main() {
		int n;
		cin >> n;
		int a[n],d=0,s=0;
		for(int i=0;i<n;i++)
			cin >> a[i];
		if(n>1){
			if(a[n-2]<a[n-1])
			d=1;
			if(a[n-2]>a[n-1])
			d=-1;
			if(a[n-1]==15)
			d=-1;
			if(a[n-1]==0)
			d=1;
		}
		if(d==1)
		cout<<"UP\n";
		if(d==-1)
		cout<<"DOWN\n";
		if(d==0 && a[0]!=15 && a[0]!=0)
		cout<<"-1";
		if(d==0 && a[0]==15)
		cout<<"DOWN\n";
		if(d==0 && a[0]==0)
		cout<<"UP\n";
	return 0;
}