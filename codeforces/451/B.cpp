#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,c=0,q=0,w=0,e=0,r=0;
	cin >> n;
	long long int a[n],b[n]={};
	cin >> a[0];
	b[0]=a[0];
	for(int i=1;i<n;i++){
	cin >>a[i];
	b[i]=a[i];}
	sort(b,b+n);
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
		q=i;
		break;}
	}
	for(int i=n-1;i>=0;i--){
		if(a[i]!=b[i]){
		w=i;
		break;}
	}
	reverse(a+q,a+w+1);
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
		c=1;
		break;}}
		if(c==1)
	cout<<"no";
	else
	cout<<"yes\n"<<q+1<<" "<<w+1;
	/*if(a[i]<a[i-1] && c==0){
	w=i;
	c=1;}
	if(a[i]>a[i-1] && c==1){
		e=i;
		c=2;
	}
	if(a[i]<a[i-1] && c==2)
	c=3;
	}
	if(e==0)
	e=n;
	if(c==3)
	cout<<"no";
	else
	cout<<"yes\n"<<w<<" "<<e;*/
	/*b[i]=a[i];}
	sort(b,b+n);
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
		q=i;
		break;}}
	for(int i=q+1;i<n;i++){
		if(a[i]==b[i]){
		w=i;
		break;}}
	for(int i=w+1;i<n;i++){
		if(a[i]!=b[i]){
		c=1;
		break;}}
		if(c==1)
		cout<<"no";
		else
		cout<<"yes\n"<<q+1<<" "<<w;
		*/
	return 0;
}