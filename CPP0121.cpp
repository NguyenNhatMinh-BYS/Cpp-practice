#include<bits/stdc++.h> 
using namespace std; 
long long ucln(long long a, long long b){
 int gcd = __gcd(a,b);
 return a*b/gcd;
 
}
  
   
 main(){
	int t;
	cin>>t; 
	while(t--){ 
	int n;
	long long sum=1;
	cin>>n;
	for(int i=2;i<=n;i++){
		sum=ucln(sum,i);
			
	}
	cout<<sum<<endl;	 
	}
	}
