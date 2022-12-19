#include<iostream>
using namespace std;
int main(){
	long a,b;
	cin>>a;
	while(a--){
		cin>>b;
		long check=b;
		for(int i=2;i<=b;i++){
			int sum=0;
			if(check%i==0){
			cout<<i<<" ";
			while(check%i==0){
				sum++;
				check/=i;
			}
			cout<<sum<<" ";
		}
			if(check==1) break;
			
		}
		cout<<endl;
	}
}
