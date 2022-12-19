#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long  n ;
		cin>>n;
		long a[n],max = 0;
		for(long  i = 0 ;i<n ; i++){
			cin>>a[i];
			
		}
		
	for(long i = 0 ;i< n; i++){
		for(long j = n-1; j>i; j--){
			
			if(a[j]>a[i] && max<j-i) {
				max=j-i;
				
				break;
			}
			if(j-i<max) break;
		}
	}
		cout<<max<<endl;
	}
}
