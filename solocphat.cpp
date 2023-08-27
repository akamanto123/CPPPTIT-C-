#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int k=0;
		int ok=0;
		while(n>0){
			k=n%10;
			if(k!=6&&k!=0&&k!=8){
				ok=1;
				break;
			}
			n=n/10;
		}
		if(ok==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
