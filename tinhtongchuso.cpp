#include<iostream>
using namespace std;
int main(){
	long a,b;
	cin>>a;
	while(a--){
		cin>>b;
		long check=b,sum=0;
		while(b>=10){
			check=b;
			sum=0;
			while(check>0){
			
			sum+=check%10;
			check/=10;
		}	
		
			b=sum;
			
		}
		cout<<sum<<endl;
		
	}
}
