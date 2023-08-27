#include <bits/stdc++.h>
using namespace std;
long long du(long long n,long long k){
	if(n==1){return 1;
	}
	return n%k+du(n-1,k);
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		long long n;
		long long k;
		cin>>n;
		cin>>k;
		long long a=du(n,k);
		cout<<a<<endl;
	}
}
