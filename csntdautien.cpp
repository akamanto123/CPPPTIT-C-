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
		int n;
		cin>>n;
		int cnt=0;
		for(int i=2;i<=n/2;i++){
			if(snt(i)&&snt(n-i)){
				cnt=1;
				cout<<i<<" "<<n-i;
				break;
			}
		}
		if(cnt==0){
			cout<<-1;
		}
		cout<<endl;
	}
}
