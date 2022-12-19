#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i =0 ;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int c,d;
		if(n%2==0){
			c=n/2 -1 ; d=n/2;
		} 
		else{
			c=n/2;d=(n/2) +1;
		}
		
		for(int i =0 , j =d; i<=c || j<n;j++,i++){
			if(i<=c){
				cout<<a[i]<<" ";
			}
			if(j<n) cout<<a[j]<<" ";
		}
		cout<<endl;
		
	}
}
