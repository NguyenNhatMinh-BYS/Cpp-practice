#include<bits/stdc++.h>
 using namespace std;
 
 int main(){
 	long long  t;
 	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		set<long long> s;
		long long a[n];
		for(long long i =0 ;i<n;i++){
			cin>>a[i];
			s.insert(a[i]);
			
		}
		sort(a,a+n);
//		cout<<s.size()<<endl;
		cout<<(-a[0]+a[n-1]+1) - s.size()<<endl;
		
	}
	}
	
