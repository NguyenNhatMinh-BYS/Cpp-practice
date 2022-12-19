#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int a[n][m];
		for(int i = 0;i<n;i++){
			for(int j =0 ;j<m;j++){
				cin>>a[i][j];
			}
		}
		int row=m,column=n,check=0,dem=0,index=0,i=check;
		vector<int> v;
		
		while(dem<m*n){
			
			if(dem<m*n){
				
			
			for(i = check ; i<row -1 ;i++){
				v.push_back(a[index][i]);
				dem++;
			}
			}
			if(dem<m*n){
			
			index=i;
			for( i = check ; i<column-1;i++ ){
				v.push_back(a[i][index]);
				dem++;
			}}
			if(dem<m*n){
			
			index = i;
			for( i = row -1 ; i> check ; i-- ){
				v.push_back(a[index][i]);
				dem++;
			}}
			if(dem<m*n){
				
			
			index =i;
			for( i = column -1 ; i> check ; i-- ){
				v.push_back(a[i][index]);
				dem++;
			}
			}
			index =i+1;
			
			column--;
			row--;
			check++;
			
		}
		cout<<v[k-1]<<endl;
	}
	
}








