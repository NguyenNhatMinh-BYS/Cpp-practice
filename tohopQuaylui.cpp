
#include<bits/stdc++.h>
using namespace std;
int n,k,a[1001];
int dem=0;
void Try(int x){
	for(int i = a[x-1] +1; i<=n-k+x;i++){
		a[x]=i;
		if(x==k){
			dem++;	
		}
		else Try(x+1);
	}
}
int main(){
	cin>>n>>k;
	a[0]=0;
	Try(1);
	cout<<dem;
}
