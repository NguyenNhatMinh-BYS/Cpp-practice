#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c ;
	 cin>>a>>b>>c;
	 int a1[a][b],a2[b][c];
	 for(int i =0;i<a;i++){
	 	for(int j = 0 ; j<b;j++){
	 		cin>>a1[i][j];
		 }
	 }
	 for(int i =0;i<b;i++){
	 	for(int j = 0 ;j <c;j++){
	 		cin>>a2[i][j];
		 }
	 }
	 for(int i = 0 ;i<a;i++){
	 	for(int t =0;t<c;t++){
	 		int num=0;
	 		for(int j = 0 ; j < b ;j++){
	 			num+=a1[i][j]*a2[j][t];
			 }
			 cout<<num<<" ";
		 }
		 cout<<endl;
	 }
	 
	}

