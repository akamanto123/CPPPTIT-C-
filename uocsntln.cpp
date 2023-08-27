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
		long long n;
		cin>>n;
		int max=0;
		for(int i=2;i<=sqrt(n);i++){
			if(snt(i)&&n%i==0){
				while(n%i==0){
					n=n/i;
					max=i;
				}
			}
		}
		if(n>1){
			cout<<n<<endl;
		}
		else cout<<max<<endl;
    }
}
