#include<bits/stdc++.h>
 using namespace std;
 
 int main(){
 	long long  t;
 	cin>>t;
	while(t--){
	long long  n ;
	cin>>n;
	long long a[n];
	
	for(long long  i =0 ;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
//	int min = a[0];
	vector<long long > v;
	
	
	for(long long  i =0 ;i<n;i++){
		int check =0;
		for(long long  j=0;j<n;j++){
			if(a[j]==i){
				check =1;
				v.push_back(a[j]);
				break;
			} 
			
		}
		if(check ==0) 
		
		 v.push_back(-1);
//		min++;
	}
	for(auto x : v) cout<<x<<" ";
	cout<<endl;
	}
}
