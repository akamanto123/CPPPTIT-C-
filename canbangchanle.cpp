#include <bits/stdc++.h>
using namespace std;
int count_c_l(int n){
	int c=0,l=0;
	while(n!=0){
		int k=n%10;
		if(k%2==0){
			c++;
		}
		else l++;
		n=n/10;
	}
	if(c==l){return 1;
	}
	return 0;
}
int main(){
	int n;
	cin>>n;
	int s=0;
	for(int i=pow(10,n-1);i<pow(10,n);i++){
		if(count_c_l(i)){
			cout<<i<<" ";
			s++;
			if(s%10==0) cout<<endl;
		}
	}
}
