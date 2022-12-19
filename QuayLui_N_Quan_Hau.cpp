#include<bits/stdc++.h>
using namespace std;
int n,a[1001],b[1001],c[1001],d[1001];
int dem=0;
void in(){
	for(int i =1;i<=n;i++){
		cout<<a[i]<<" ";
		
	}
//	dem++;
	cout<<endl;
}
void Try(int k){
	for(int i=1;i<=n;i++){

		if(d[i]==1 && b[k-i + n]==1 && c[i+k-1]==1 ){
			a[k]=i;
			d[i]=0;
			b[k-i+n]=0;
			c[i+k-1]=0;
//			in();
			if(k==n) in();
			else Try(k+1);
			d[i]=1;
			b[k-i+n]=1;
			c[i+k-1]=1;
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n*n;i++){
		b[i]=c[i]=d[i]=1;
	}
	Try(1);
//	cout<<dem;
}
