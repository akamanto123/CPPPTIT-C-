#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		char s;
		cin>>s;
		if(s>='a'&&s<='z'){
			s=s-32;
		}
		else s=s+32;
		cout<<s<<endl;
	}
}
