#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		double a,b,c,d;
		cin>>a>>b>>c>>d;
		double kc=sqrt((a-c)*(a-c)+(b-d)*(b-d));
		cout<<setprecision(4)<<fixed<<kc<<endl;
	}
}
