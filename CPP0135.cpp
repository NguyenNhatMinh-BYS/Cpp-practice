#include<bits/stdc++.h> 
using namespace std;
int main(){
	

int a;
cin>>a;
while(a--){
	long long b;
	cin>>b;
	for(int i=2;i<=sqrt(b);i++){
		int sum=0;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				sum=1;
				break;
			}
		}
		if(sum==0)
		cout<<i*i<<" ";
	}
	cout<<endl;
}
}
