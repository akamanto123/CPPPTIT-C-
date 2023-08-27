#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string str;
		getline(cin,str);
		int a=str.length();
		for(int i=0;i<a;i++){
			if(str[i]=='0'&&str[i+1]=='8'&&str[i+2]=='4'){
				str.erase(i,3);
			}
		}
		cout<<str<<endl;
	}
}
