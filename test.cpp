#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	cin>>t;
	while(t--){
		
	
	cin>>n;
	int a[n];
	for(int i =0 ;i<n;i++){
		cin>>a[i];
	}
	int init = 1, max =-1e9;
	for(int i = 0 ;i <n;i++){
		init=1;
		for(int j = i ;j<n;j++){
			init*=a[j];
			if(init>max) max=init;
		}
	}
	cout<<max<<endl;
}
}
