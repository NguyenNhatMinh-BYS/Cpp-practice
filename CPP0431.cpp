#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long  n,k,check=0;
		cin>>n>>k;
		long long  a[n];
		for(long long i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for(int i =0 ;i<n;i++){
		int  x = lower_bound(a+i+1,a+n,a[i]+k) - a ;
		
		while(a[x]>=k+a[i]) x--;
		check+=x-i;
	
		}
			cout<<check<<endl;
	}
}

