#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	int a;
	cin>>a;
	while(a--){
		long long b;
		cin>>b;
		int sum=0,check=0;
		
		for(long long i=1;i<b;i++){
			if(__gcd(i,b)==1){
			
				sum++;
			}
		
		}
		if(sum>1){
		
		for(long long  i=2;i<=sqrt(sum);i++){
			if(sum%i==0){
				check=1;
				break;
			}
		}
		}
		if(check==0 && sum>1) cout<<1;
		else cout<<0;
		cout<<endl;
	}
}
