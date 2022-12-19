#include<bits/stdc++.h>
using namespace std;
int main(){
int t ;
cin>>t;
while(t--){
	int m,n;
	cin>>m>>n;
	long int a[m][n],b[m][n];
	for(int i =0 ;i < m ;i++){
		for(int j = 0 ; j< n ;j++){
			cin>>a[i][j];
			if(a[i][j]==1) b[i][j]=1;
			else b[i][j]=0;
		}
	}
	for(int i =0 ;i < m ;i++){
		for(int j = 0 ; j< n ;j++){
			if(b[i][j]==1){
				for(int t =0 ;t<m;t++){
					a[t][j]=1;
					
				}
				for(int t =0 ;t<n;t++){
					a[i][t]=1;
					
				}
			}
		}
	}
	for(int i =0 ;i < m ;i++){
		for(int j = 0 ; j< n ;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

}
}

