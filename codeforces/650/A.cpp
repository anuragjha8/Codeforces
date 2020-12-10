#include <bits/stdc++.h>
using namespace std;


int main() {
	long long int n;
	cin >> n;
	long long int x[n],y[n],s=0,q=0,i=0,c=1;
	map<long long int,long long int>f,f1,f3,f4;
	vector<pair<int,int>>v;
	for(i=0;i<n;i++){
		cin >> x[i]>>y[i];
		f[x[i]]++;
		f1[y[i]]++;
		v.push_back({x[i],y[i]});
	}
	for(auto i:f){
		q=i.second;
		s+=((q*(q-1))/2);
	}
	for(auto i:f1){
		q=i.second;
		s+=((q*(q-1))/2);
	}
	sort(v.begin(),v.end());
	/*for(int i=0;i<n;i++)
	cout<<v[i].first<<" "<<v[i].second<<endl;*/
	for(int i=1;i<n;i++){
		//cout<<c<<s<<endl;
		if(v[i].first==v[i-1].first && v[i].second==v[i-1].second)
		c++;
		else{
			s-=((c*(c-1))/2);
			c=1;
		}
	}
	s-=((c*(c-1))/2);
			c=1;
	cout<<s;
	return 0;
}