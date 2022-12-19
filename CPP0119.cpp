#include<bits/stdc++.h>
using namespace std; 

int main(){
	int a;
	cin>>a;
	while(a--){
		long long b;
		cin>>b;
		
		int i=1;
		int sum=0;
		while(i<=b/i){
			if(b%i==0){
//				sum++;
			if(i%2==0) sum++;	
			
			if(b/i%2==0) sum++;
			if(b/i==i && i%2==0) sum--;
			}
			i++;
		
		}
		cout<<sum<<endl;
		}
	}
	

