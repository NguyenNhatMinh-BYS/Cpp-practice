#include<bits/stdc++.h>
using namespace std; 

int main(){
	int a;
	cin>>a;
	while(a--){
		long m,n,a,b,sum=0;
		cin>>m>>n>>a>>b;
		
		
		for(int i=m;i<=n;i++){
			if(i%a==0 || i%b==0) sum++;
			
		}
		cout<<sum<<endl;
	}
}
