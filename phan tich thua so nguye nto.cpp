#include <bits/stdc++.h>
using namespace std;
bool snt(int n){
	if(n==0||n==1) return 0;
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
		if(n%2==0){
		int cnt2=0;
		while(n%2==0){
			n=n/2;
			cnt2++;
		}
		cout<<2<<" "<<cnt2<<" ";
		}
		for(int i=3;i<=n;i=i+2){
			if(snt(i)&&n%i==0){
				int cnti=0;
				while(n%i==0){
					n=n/i;
					cnti++;
				}
				cout<<i<<" "<<cnti<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
