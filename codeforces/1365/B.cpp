#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int o=0;o<t;o++){
		int n;
		cin >> n;
		int a[n],b[n],c[n],z=0,q=0,f=0;
		for(int i=0;i<n;i++){
		cin >> a[i];
			c[i]=a[i];
		}
		for(int i=0;i<n;i++){
		cin >> b[i];
		if(b[i]==0)
		z++;
		else
		q++;}
		sort(c,c+n);
		if((n!=1 && q==0)||(n!=1 && z==0))
		f=1;
		/*for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				if(b[i]==b[j] && i!=j){
					f=1;
					break;
				}
				else{
				int r=a[i];
				a[i]=a[j];
				a[j]=r;
				int y=b[i];
				b[i]=b[j];
				b[j]=y;
				break;
				}
			}}
			if(f==1)
			break;}*/
			int h=0;
			for(int i=0;i<n;i++){
				if(a[i]==c[i])
				h++;
			}
			if(h==n)
			f=0;
			if(f==1)
		cout<<"No\n";
		
		else
		cout<<"Yes\n";
	}
	return 0;
}
