#include<bits/stdc++.h>
#include<math.h> 
using namespace std;
void  check(long long b){
	long long a=b,check; 
	for(long long i=2;i<=sqrt(b);i++){
		
	
			while(a%i==0){
				a/=i;
				cout<<i<<" ";
				
				
			}
		
	
	}
	if(a!=1)cout<<a;
	
	
}
int main(){
	long long  a;
	cin>>a;
	if(a>=1)
	while(a--){
		long long b;
		cin>>b;
		if(b>=2){
			check(b);
		}
	
		cout<<endl; 
	} 
} 
