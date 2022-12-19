#include<iostream>
using namespace std;
long long rever(long long a) {
	long long c=0,b=a;
	while(a>0){
		c=c*10+a%10;
		a/=10;
	}
	if(c==b) return 1;
	return 0;
}
int main(){
	long long a,t;
	cin>>a;
	while(a--){
		cin>>t;
		if(rever(t)){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	} 
}
