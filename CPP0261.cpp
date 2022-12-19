#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	int a[n][n];
	
		for(int i = 0 ; i<n;i++){
			for(int j = 0 ; j<n;j++){
				cin>>a[i][j];
			}
		}
	cin>>m;
		int b[m][m];
		for(int i = 0 ; i<m;i++){
			for(int j = 0 ; j<m;j++){
				cin>>b[i][j];
			}
		}
			int min=0;
		for(int j = 0 ; j<n;j++){
			
				if(min==m) min =0;

			for(int t = 0 ; t<m;t++){
				int check = t;
			
					
				
			while(check<n){
				a[j][check]*=b[min][t];

				check+=m;
			}
		
		}
		min++;
		}

		
	

for(int i = 0 ; i<n;i++){
			for(int j = 0 ; j<n;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
}
