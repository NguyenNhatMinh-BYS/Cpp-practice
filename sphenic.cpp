#include<bits/stdc++.h>
using namespace std;
int  sphenic(long b){
	long a=b,leng=0;
	for(long i=2;i<a;i++){
		
		int sum=0;
		
		
		if(b%i==0){
				while(b%i==0){
//					cout<<i<<endl;
					leng++;
				b/=i;
				sum++;
				if(sum>1){
				return 0; 
				}
			
		}
		}
//           66/2=33/3=11      
//66 42 30
}
	if(leng==3 && b==1) return 1; 
	else return 0; 
}
int main(){
	int a;
	cin>>a;
	while(a--){
		long b;
		cin>>b;

		cout<<sphenic(b)<<endl;
	}
} 
