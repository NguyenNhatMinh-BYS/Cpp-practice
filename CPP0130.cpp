#include<bits/stdc++.h>
#include<math.h> 
using namespace std;
int  check(long long b){
	
	for(int i=2;i<=sqrt(b);i++){
		
	
			while(b%i==0){
				b/=i;
				cout<<i<<" ";
			}
		
	
	}
	if(b!=1)cout<<b;
	
}
int main(){
	int a;
	cin>>a;
	while(a--){
		long long b;
		cin>>b;
		check(b);
		cout<<endl; 
	} 
} 
