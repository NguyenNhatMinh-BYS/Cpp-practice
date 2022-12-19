#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long  a[n];
		
		for(int i =0 ;i<n;i++){
			cin>>a[i];
		}
		long long min=100000000,result;
		
		for(int i = 0 ;i<n;i++){
			for(int j =i+1;j<n;j++){
				if(abs(a[i]+a[j])<min){
					min=abs(a[i]+a[j]);
					result=a[i]+a[j];
				}
			}
		}
		cout<<result<<endl;
	}
}
