#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i =0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		
		sort(a,a+n);
		int check =0,result;
		for(int i =0;i<n;i++){
			if(a[i]!=b[i] && check ==0) {
				cout<<i+1<<" ";
				check=1;
			}
			if(a[i]!=b[i] && check ==1){
				result =i;
			}
		}
		cout<<result+1<<endl;
	}
}
