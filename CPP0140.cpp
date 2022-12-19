#include<bits/stdc++.h>
// so hoan hoan hao khi p la so nguyen to va 2mu(p) - 1 nguyen to 
//thi 2mu(p-1) x (2mu(p)-1) la so hoan hao
using namespace std;
long long snt(long long a){
	for(long long i=2;i<=sqrt(a);i++){
		if(a%i==0) return 0;
	}
	return 1;
}
int main(){
	int t; cin>>t;
	while(t--){
		long long b,sum=0;
		cin>>b;
		
		for(long long i=2;i<=32;i++){
			if(snt(i)){
			
				if(snt(pow(2,i)-1)){
					if(pow(2,i-1)*(pow(2,i)-1)==b){
					
					cout<<1;
					sum=1;
					break;
				}
				}
			}
		}
		if(sum==0) cout<<0;
		cout<<endl;
		
	}
}
