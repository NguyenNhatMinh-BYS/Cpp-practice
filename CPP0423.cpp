#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	long long  n,k;
	cin>>n>>k;
	long long cnt=0;
	long long a[n];
	for(long long  i =0 ;i<n;i++){
		cin>>a[i];
		if(a[i]<=k) cnt++;
	}
	int sum=0,max=0;	
	
	for(int i=0;i<=n-cnt;i++){
		sum=0;
		for(int j =i ; j<i+cnt;j++){
			if(a[j]<=k) sum++; 
		} 
		if(sum>max) max=sum;
	}
	cout<<cnt-max<<endl;
	
}
}
