#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	while(a--){
		long long n,p,x=0,multi=1;
		cin>>n>>p;
		for(long i=p;i<=n;i+=p){
			multi=i;
			while(multi%(p)==0){
				multi/=p;
				x++;
				
			}
//			
		}
		
		cout<<x<<endl;
		
	}
}
