#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i =0 ;i<n;i++) {
			cin>>a[i];
			b[i]=a[i];
		}
		sort(a,a+n);
		sort(b,b+n,greater<int>());
		int check=0;
		for(int i =0 ;i<n;i++){
			if(check == n) break;
			cout<<b[i]<<" ";
			check++;
			if(check==n) break;
			cout<<a[i]<<" ";
			check++;
		}
		cout<<endl;
	} 
}
