#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a=1,b=1;
		if(n<3){
			cout<<1<<endl;
		}
		else{
		for(int i=2;i<n;i++){
			long long c=a+b;
			a=b;
			b=c;
		}
		cout<<b<<endl;
	    }
	}
}
