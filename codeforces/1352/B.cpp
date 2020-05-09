
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i=0;i<t;i++)
{
	int c=0;
	int n,k;
	cin >>n>>k;
	if(n>k){
        int q=k-1;
        int e=2*q;
        long long int w=n-q,y=n-e;
        if(w%2==1 && w>0)
            c=1;
        if(y%2==0 && y>0)
            c=2;
        if(c==1){
            cout<<"YES\n";
            for(int i=0;i<q;i++)
                cout<<"1 ";
                cout<<w<<endl;
        }
        else if(c==2){
            cout<<"YES\n";
            for(int i=0;i<q;i++)
                cout<<"2 ";
                cout<<y<<endl;
        }
        else
        cout<<"NO\n";
	}
	else if(n==k){
            cout<<"YES\n";
            for(int i=0;i<n;i++)
                cout<<"1 ";
            cout<<endl;
        }
	else
        cout<<"NO\n";
}
	return 0;
}
