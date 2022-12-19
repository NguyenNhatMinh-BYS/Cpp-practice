#include <bits/stdc++.h> 
using namespace std;
int main(){
	int t ;
	cin>>t;
	while(t--){
		int n ;
		cin>>n;
		map<int,int> m; 
		set<int>s;
		int a[n*n], b[n];
		for(int i = 0 ;i<n*n;i++){
			cin>>a[i];
			if(i<n){
				b[i]=a[i];
				s.insert(b[i]); 
			} 
		}
		int size = s.size(); 
		for(auto x : s){
			m[x]=1;
			
		}
		for(int i = 1 ;i < n ;i++){
			int raise= (i+1)*n;
			for(auto x : m ){
				

			for(int j = n*i ; j<raise;j++){
				if(x.first==a[j]){
				m[x.first]++;
				break;}
			} 
		}
		}
		int check=0;
		for(auto x:m){
				if(x.second==n){
					check++;
				}
		} 
		cout<<check<<endl;
		
		
	}
}
