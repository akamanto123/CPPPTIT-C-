#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		int n=a.length();
		if(a[n-1]=='6'&&a[n-2]=='8'){
			cout<<1<<endl;
		}
		else cout<<0<<endl;
	}
}
