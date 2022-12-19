#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n][m];
		int check =0;
		for(int i =0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
				if(i>0){
					
				
				if(a[i-1][j]!=0 && a[i][j]==1){
					a[i][j]=a[i-1][j]+1;
				}
			}
			if(a[i][j]==n) check++; 
//			cout<<a[i][j]<<" ";
			}
//			cout<<endl;
		}
	int	max= check*n,max_odd;
		for(int i =0 ;i<n;i++){
			check =0 ;
			for(int j =0 ;j<m;j++){
			if(a[i][j]==i+1) check++;
			}
			max_odd=check*(i+1);
			if(max_odd>max) max=max_odd;
		}
		check=0;
		for(int i =0;i<m;i++){
			for(int j=0;j<n;j++){
				if( a[j][i]!=0) a[j][i]=1; 
				if(i>0){
					
				
				if(a[j][i-1]!=0 && a[j][i]!=0){
					a[j][i]++;
				}
			}
			cout<<a[j][i]<<" ";
			
			}
			cout<<endl;
		}
		max_odd=0;
		for(int i =0 ;i<m;i++){
			check =0 ;
			for(int j =0 ;j<n;j++){
			if(a[i][j]==i+1) check++;
			}
			max_odd=check*(i+1);
			if(max_odd>max) max=max_odd;
		}
	}
}
