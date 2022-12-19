#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long  n ,l,r;
		cin>>n;
		long long  a[n];
		for(int i =0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		long long  k,x;
		cin>>x>>k;
		long long  y = lower_bound(a,a+n,x) - a ;
		if(a[y]==x){
			l=y-1;
			r=y+1;		
		}
		else{
			r=y;
			l=y-1;
		}
		for(long long  i =k/2-1;i>=0;i--){
			cout<<a[l-i]<<' ';
		}
		for(long long  i=0;i<k/2;i++){
			cout<<a[r+i]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
