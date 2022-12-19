#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long a,sum=0,check;
	cin>>a;
	check=a;
	for(long long i=2;i<=sqrt(a);i++){
	sum=0;
	if(check%i==0){
	
	while(check%i==0){
		sum++;
		check=check/i;
	}
	
	cout<<i<<" "<<sum<<endl;
	}
	}
	if(check>1) cout<<check<<" "<<1;
}
