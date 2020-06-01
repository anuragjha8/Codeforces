#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[5],q=0,s=0;
	for(int i=0;i<5;i++)
	cin >>a[i];
	s=a[1]+a[2]+a[3]+a[4]+a[0];
	if(s%5==0 && s!=0)
	q=s/5;
	else
	q=-1;
	cout<<q;

	return 0;
}