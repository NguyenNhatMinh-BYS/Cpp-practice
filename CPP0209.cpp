#include<bits/stdc++.h>
using namespace std;
int main(){
int t ;
cin>>t;
while(t--){
	int m,n;
	cin>>m>>n;
	int a[m];
	for(int i =0 ;i<m;i++){
		cin>>a[i];
	}
//	sort(a,a+m);
	while(n--){
		int l,r,sum=0;
		cin>>l>>r;
		for(int  i =l-1 ; i<r;i++){
			sum+=a[i];
		
			
		}
		cout<<sum<<endl;
	}
}
}
