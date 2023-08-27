#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long c=a*b;
		while(a!=b){
			if(a>b){
				a=a-b;
			}
			else b=b-a;
		}
		cout<<c/a<<" "<<a<<endl;
	}
}
