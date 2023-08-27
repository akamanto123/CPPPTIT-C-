#include <bits/stdc++.h>
using namespace std;
bool snt(int n){
	if(n==0||n==1){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int ok=0;
		for(int i=2;i<=sqrt(n);i++){
				while(n%i==0){
					k--;
					n=n/i;
					if(k==0){
						ok=1;
						cout<<i<<endl;
						break;
					}
				}
			}
		if(n>1&&k==1){
			cout<<n<<endl;
		}
		else if(ok==0) cout<<-1<<endl;
	}
}
