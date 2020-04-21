#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int t1=0;t1<t;t1++){
		long long int n;
		cin >> n;
		if(n%4!=0)
		cout << "NO\n";
		else{
			cout << "YES\n";
			for(int i=2;i<=n;i=i+2)
			cout << i << " ";
			for(int i=1;i<=n/2-1;i++)
			cout << 2*i-1 << " ";
			cout << (3*n/2)-1 << endl;
		}
	}
	return 0;
}