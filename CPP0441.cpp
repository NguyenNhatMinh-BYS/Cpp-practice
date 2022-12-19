#include<bits/stdc++.h>
 using namespace std;
 
 int main(){
 	long long  t;
 	cin>>t;
	while(t--){
		long long  n,k;
		cin>>n>>k;
		long long  a[n];
		long long  check =0,result=0;
		for(long long  i =0 ; i< n ;i++){
			cin>>a[i];
			if(a[i]==k&&check==0) {
				result = i+1;
				check =1;
			}
		}
		if(check == 1) cout<<result<<endl;
		if(check ==0) cout<<-1<<endl;
	}
	}
