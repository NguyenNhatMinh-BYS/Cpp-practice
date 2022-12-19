#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ;
	cin>>t;
	while(t--){
		long long m,n,sum=0,result=0;
		cin>>n>>m;
		long long a[n][m];
		for(long long i =0;i<n;i++){
			for(long long j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		long long b[3][3];
		for(long long i =0;i<3;i++){
			for(long long j=0;j<3;j++){
				cin>>b[i][j];
			}
		}
		long long x1=0,y1=2,x2=0,y2=2;
		while(y1<n){
			
		x2=0;
		y2=2;
		while(y2<m){
			sum=0;
			for(long long hang=0,i=x1;i<=y1,hang<3;i++,hang++) {
			
			for(long long cot=0,j=x2;j<=y2,cot<3;cot++,j++){
//				cout<<i<<" "<<j<<endl;
				sum+=a[i][j]*b[hang][cot];
			}
//			cout<<sum<<endl;
		}
		result+=sum;
		x2++;
		y2++;
		}
		x1++;
		y1++;
//		cout<<y1;
	}
	cout<<result<<endl;	
	}
}
