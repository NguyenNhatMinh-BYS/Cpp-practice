// 1 . . . . 6 7 8 9 .
#include<bits/stdc++.h> 
using namespace std;
 int main(){
 	int a,b,c;
 	cin>>a>>b>>c;
 	int arr2[a];
 	fill_n(arr2,a,1) ;
// 	for(auto x :arr2) cout<<x<<" ";
 	for(int i =0 ;i<c;i++){
 		int x;
 		cin>>x;
 		arr2[x-1]=0;
	 } 
 	int max=0,sum=0;
 	for(int i =0 ;i<=a-b;i++){
 		sum=0;
 		for(int j = i;j<i+b;j++){
 			if(arr2[j]==1) sum++;
		 }
		 if(sum>max) max=sum;
	 }
	 cout<<b-max<<endl;
 }
