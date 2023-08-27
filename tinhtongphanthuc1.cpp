#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
	int n;
	cin>>n;
	double tong=0;
	for(int i=1;i<=n;i++){
		tong=tong+(double)1/i;
	}
	cout<<setprecision(4)<<fixed<<tong;
}
