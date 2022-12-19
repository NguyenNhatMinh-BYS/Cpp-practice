#include <bits/stdc++.h> 
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n,a;
		cin>>n;
		set<long> s;
		for(int i =0 ;i<n;i++){
			cin>>a;
			s.insert(a);
		}
		int check =2;
		if(s.size()<check) cout<<-1;
		else {
			for(auto x :s ){
				if(check>0) cout<<x<<" ";
				else break;
				check--;
			}
		}
		cout<<endl;
	}
}
