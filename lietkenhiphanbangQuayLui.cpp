#include<bits/stdc++.h>
using namespace std;
void result(int a[],int n){
	for(int i =0 ;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
void Back_Track(int n,int c,int a[]){
	for(int i =0 ;i<=1;i++){
		a[c]=i;
		if(c==n-1) result(a,n);
		else Back_Track(n,c+1,a);
		}
	}

 
int main(){
	int n;
	cin>>n;
	int a[n];
	Back_Track(n,0,a);
}
