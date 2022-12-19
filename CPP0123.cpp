#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long a;
	cin>>a;
	if(a<2){
		cout<<"NO";
		return 0;
	}
	for(long long  i=2;i<=sqrt(a);i++){
		if(a%i==0){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
}
