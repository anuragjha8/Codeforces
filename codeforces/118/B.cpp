#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s0="",s1="",s2="",s3="",s4="",s5="",s6="",s7="",s8="",s9="";
	s0="0";
	s1="0 1 0";
	s2="0 1 2 1 0";
	s3="0 1 2 3 2 1 0";
	s4="0 1 2 3 4 3 2 1 0";
	s5="0 1 2 3 4 5 4 3 2 1 0";
	s6="0 1 2 3 4 5 6 5 4 3 2 1 0";
	s7="0 1 2 3 4 5 6 7 6 5 4 3 2 1 0";
	s8="0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0";
	s9="0 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1 0";
	if(n==2)
	cout<<"    "<<s0<<"\n  "<<s1<<"\n"<<s2<<"\n  "<<s1<<"\n    "<<s0<<endl;
	if(n==3)
	cout<<"      "<<s0<<"\n    "<<s1<<"\n  "<<s2<<"\n"<<s3<<"\n  "<<s2<<"\n    "<<s1<<"\n      "<<s0<<endl;
	if(n==4)
	cout<<"        "<<s0<<"\n      "<<s1<<"\n    "<<s2<<"\n  "<<s3<<"\n"<<s4<<"\n  "<<s3<<"\n    "<<s2<<"\n      "<<s1<<"\n        "<<s0<<endl;
	if(n==5)
	cout<<"          "<<s0<<"\n        "<<s1<<"\n      "<<s2<<"\n    "<<s3<<"\n  "<<s4<<"\n"<<s5<<"\n  "<<s4<<"\n    "<<s3<<"\n      "<<s2<<"\n        "<<s1<<"\n          "<<s0<<endl;
	if(n==6)
	cout<<"            "<<s0<<"\n          "<<s1<<"\n        "<<s2<<"\n      "<<s3<<"\n    "<<s4<<"\n  "<<s5<<"\n"<<s6<<"\n  "<<s5<<"\n    "<<s4<<"\n      "<<s3<<"\n        "<<s2<<"\n          "<<s1<<"\n            "<<s0<<endl;
	if(n==7)
	cout<<"              "<<s0<<"\n            "<<s1<<"\n          "<<s2<<"\n        "<<s3<<"\n      "<<s4<<"\n    "<<s5<<"\n  "<<s6<<"\n"<<s7<<"\n  "<<s6<<"\n    "<<s5<<"\n      "<<s4<<"\n        "<<s3<<"\n          "<<s2<<"\n            "<<s1<<"\n              "<<s0<<endl;
	if(n==8)
	cout<<"                "<<s0<<"\n              "<<s1<<"\n            "<<s2<<"\n          "<<s3<<"\n        "<<s4<<"\n      "<<s5<<"\n    "<<s6<<"\n  "<<s7<<"\n"<<s8<<"\n  "<<s7<<"\n    "<<s6<<"\n      "<<s5<<"\n        "<<s4<<"\n          "<<s3<<"\n            "<<s2<<"\n              "<<s1<<"\n                "<<s0<<endl;
	if(n==9)
	cout<<"                  "<<s0<<"\n                "<<s1<<"\n              "<<s2<<"\n            "<<s3<<"\n          "<<s4<<"\n        "<<s5<<"\n      "<<s6<<"\n    "<<s7<<"\n  "<<s8<<"\n"<<s9<<"\n  "<<s8<<"\n    "<<s7<<"\n      "<<s6<<"\n        "<<s5<<"\n          "<<s4<<"\n            "<<s3<<"\n              "<<s2<<"\n                "<<s1<<"\n                  "<<s0<<endl;
	return 0;
}