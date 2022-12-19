#include<bits/stdc++.h>
 using namespace std;
 
 int main(){
 	long long  t;
 	cin>>t;
	while(t--){
		long long  a,b;
		cin>>a>>b;
		multiset<long long > s;
		for(long long i= 0;i<a+b;i++){
			int x;
			cin>>x;
			s.insert(x);
		}
		for(auto x : s) cout<<x<<" ";
		cout<<endl;
	}
}
