#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n; cin>>n;
		long a[4*n][4*n];
		long num=1;
		for(int i = 0 ;i <4*n;i++){
			for(int j=0;j<n*4;j++){
				a[i][j]=num;
				num++;
			}
		}
		vector<int> v1,v2;
		//1;
		int column=4*n,row=4*n , check =2,index= row/2 -1 ,k=0,x=0;
		
		for(int i =0;i<n;i++){
			int b,j;
			index= row/2 -1-x;
			k=0;
			for(j = (column/2) +x  ;k<check;j--){
				v1.push_back(a[j][index]);
				k++;
			}
			b=j;
			k=0;
			index= b;
			for(j = row/2 -1-x  ;k<check;j++){
				v1.push_back(a[index][j]);
				k++;
			}
			b=j;
			k=0;
			check+=2;
//			index= row/2 +1 +x;
			for( j =index;k<check;j++){
				v1.push_back(a[j][b]);
				k++;
			}
			if(i+1<n){
				
			k=0;
			index= j;
			for( j =b;k<check;j--){
				v1.push_back(a[index][j]);
				k++;
			}
			}
			
			check+=2;
			x+=2;
			
		}
		for(auto y : v1) cout<<y<<" ";
		cout<<endl;
		//2 
		 column=4*n,row=4*n , check =2,index,k=0,x=0;
		for(int i = 0 ;i<n;i++){
			int b,j;
			index= row/2 +x;
			k=0;
			for(j = (column/2) -1 -x  ;k<check;j++){
				v2.push_back(a[j][index]);   
				k++;
			}
			b=j;
			k=0;
			index= b;
			for(j = row/2 +x  ;k<check;j--){
				v2.push_back(a[index][j]);
				k++;
			}
			b=j;
			k=0;
			check+=2;
			for( j =index;k<check;j--){
				v2.push_back(a[j][b]);
				k++;
			}
			if(i+1<n){
				
			k=0;
			index= j;
			for( j =b;k<check;j++){
				v2.push_back(a[index][j]);
				k++;
			}
			}
			check+=2;
				x+=2;
		}
		for(auto y : v2) cout<<y<<" ";
		cout<<endl;
	}
}

























