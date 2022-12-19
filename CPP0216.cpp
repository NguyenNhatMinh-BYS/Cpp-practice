#include<bits/stdc++.h>
using namespace std;
string check(int l,int r,int a[],int n){
	int max=0,check=0;
	for(int i=l;i<=r;i++){
		
		if(check<=a[i]){
			check=a[i];
			max=i;
		}
	}
	
	for(int i = l;i<max;i++){
			if(a[i+1]<a[i]){
				return "No";
			}
		}
	for(int i = max;i<r;i++){
		if(a[i+1]>a[i]) return "No";
	}
	return "Yes";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i = 0 ;i<n;i++){
			cin>>a[i];
		}
		int l,r;
		cin>>l>>r;
		cout<<check(l,r,a,n)<<endl;
		
	}
}
