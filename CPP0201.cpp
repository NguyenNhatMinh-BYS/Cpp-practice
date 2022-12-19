#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ;
	cin>>t;
	while(t--){
		long a,min;
		cin>>a;
		long arr[a];
		for(long i =0 ;i<a;i++){
			cin>>arr[i];
			
		}
		sort(arr,arr+a);
		min=arr[1]-arr[0];
//	cout<<min<<endl;
		for(long i=1;i<a-1;i++){
			
				if(arr[i+1]-arr[i]<min ){
					min=arr[i+1]-arr[i];
//					cout<<min<<endl;
				}
			
		}
		cout<<min<<endl;
}
}
