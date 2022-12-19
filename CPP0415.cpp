#include<bits/stdc++.h>
 using namespace std;
 
 int main(){
 	int t;
 	cin>>t;
	while(t--){
		long  n,m;
		cin>>n>>m;
		long  a[n],b[m];
		
		for(int i =0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n); long max =a[n-1];
		for(int j =0 ;j<m;j++){
			cin>>b[j];
		}
		sort(b,b+n);
		long min=b[0];
		cout<<max*min<<endl;
	}
}
