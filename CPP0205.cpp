#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		int arr[a],sum=0;
		for(int i =0 ;i <a;i++){
			cin>>arr[i];
			if(sum<arr[i]) sum=arr[i];
		}
		cout<<sum<<endl;
	}
}
