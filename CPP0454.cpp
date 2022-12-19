#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long  n;
		cin>>n;
		long long  a[n];
		for(int i =0 ;i<n;i++){
			cin>>a[i];
			a[i]=a[i]*a[i]; 
		} 
		sort(a,a+n);
		long long  check =0;
		for(int i =0;i<n;i++){
			
			for(int j =i+1 ; j<n;j++){
				if(binary_search(a,a+n,a[i]+a[j])){
					cout<<"YES";
					check=1;
					break;	
				} 
			} 
			if(check==1) break;
		}
		if(check ==0) cout<<"NO";
		cout<<endl;
	}
}
