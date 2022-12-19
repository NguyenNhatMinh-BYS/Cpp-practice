#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ;
	cin>>t;
	while(t--){
	int n ;
	cin>>n;
	int a[n];
	for(int i = 0 ; i<n;i++){
		cin>>a[i];
	}		
	int l=0,r=n-1,check=0; 
	while(r>=l){
		if(a[r]==a[l]){
			l++;
			r--;
		}
		else if(a[r]>a[l]){
			l++;
			a[l]+=a[l-1];
			check++;
		}
		else if(a[r]<a[l]){
			r--;
			a[r]+=a[r+1];
			check++;
		}
	
	} 
	cout<<check<<endl;	
	}
}
