#include<bits/stdc++.h>
using namespace std;
int main(){
int t ;
cin>>t;
while(t--){
	int m,n;
	cin>>m>>n;
	int a[m];
	for(int i =0 ;i<m;i++){
		cin>>a[i];
	}
	for(int i =n ;i<m;i++){
		cout<<a[i]<<" ";
	}
	for(int i =0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
}
