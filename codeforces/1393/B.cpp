#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,q=0,x,p=0,l=0,t,z=0;
	char c;
	cin >> n;
	int a[n],f[100001]={};
	for(int i=0;i<n;i++){
		cin >> a[i];
		f[a[i]]++;
	}
	cin >>t;
	for(int i=0;i<100001;i++){
		if(f[i]>=4){
			p+=(f[i]/4);
		}
			z=f[i]%4;
			q+=(z/2);
	}
	//cout<<p<<" "<<q<<endl;
	while(t--){
		cin >>c>>x;
		if(c=='+'){
		f[x]+=1;
		if(f[x]%4==2){
			q+=1;
		}
		else if(f[x]%4==0){
			p+=1;
			q-=1;
		}
		}
		else{
		f[x]--;
		if(f[x]%4==1){
			q-=1;
		}
		if(f[x]%4==3){
			p-=1;
			q+=1;
		}
		}
		if((p==1 && q>1)||(p>1))
		cout<<"YES\n";
		else
		cout<<"NO\n";
		//cout<<p<<" "<<q<<endl;
	}
	return 0;
}