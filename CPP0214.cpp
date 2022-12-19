#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ;
	cin>>t;
	while(t--){
		long n,k;
		cin>>n>>k;
		long a[n];
		for(int i = 0 ;i<n;i++){
			cin>>a[i];
		}
		multiset<int> m;
		for(int i = 0 ;i<k;i++){
			m.insert(a[i]);
		}
		for(int i = k ; i<n;i++){
			cout<<*m.rbegin()<<" ";
			m.erase(m.find(a[i-k]));
			m.insert(a[i]);
		}
		cout<<*m.rbegin()<<endl;
	}
} 
