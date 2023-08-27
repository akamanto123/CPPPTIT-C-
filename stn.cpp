#include <bits/stdc++.h>
using namespace std;
unsigned long long stn(unsigned long long n){
	unsigned long long newm=0;
	while(n>0){
		newm=newm*10+n%10;
		n=n/10;
	}
	return newm;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		unsigned long long n;
		cin>>n;
		stn(n);
		if(stn(n)==n){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
}
