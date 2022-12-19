#include<bits/stdc++.h>
using namespace std;
void heapSort(int a[],int k,int n){
	int max = k;
	int l=2*k+1;
	int r=2*k+2;
	if(l<n && a[l]>a[max]){
		max=l;
	}
	if(r<n && a[r]>a[max]) max=r;
	if(max!=k){
		swap(a[max],a[k]);
		return heapSort(a,max,n);
	}
}
int main(){
	int n ;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=(n/2) -1;i>=0;i--){
		heapSort(a,i,n);
	} 
	for(int i=n-1;i>=0;i--){
		swap(a[0],a[i]);
		heapSort(a,0,i);
	}
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
