#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long a,b;
	cin>>a>>b;
	if(a>b){
		long long tmp = a;
		a=b;
		b=tmp;
	}
	
	for(long long i = a ; i<=b;i++){
		int sum=0;
		if(i<2) continue;
		for(int j = 2;j<=sqrt(i);j++){
			if(i%j==0){
				sum=1;
				break;
			}
		}
		if(sum==0) cout<<i<<" ";
	}
}
