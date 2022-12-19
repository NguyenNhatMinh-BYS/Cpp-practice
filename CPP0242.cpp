#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ;
	cin>>t;
	while(t--){
		int n ; cin>>n;
		int a[n],b[n];
		for(int i =0 ;i<n;i++){
			cin>>a[i];
		}
		for(int i =0 ;i<n;i++){
			cin>>b[i];
		}
		int check = 0 ,sum=0,result=0;
		for(int i = 0 ;i<n;i++){
			check = 0 ,sum=0;
			for(int j=i;j<n;j++){
				check+=a[j];
					sum+=b[j];
				if(check==sum){
					result=max(j-i+1,result);
				}
			
					
				
			}
		}
		cout<<result<<endl;
	}
}
