#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n];
		vector<long long > b; 
		for(int i =0 ;i<n;i++) {
			cin>>a[i];
			b.push_back(a[i]);
		}
		sort(b.begin(),b.end());
		for(int i =0 ;i<n;i++){
			auto x= upper_bound(b.begin(),b.end(),a[i]);
			if(x!=b.end()){
				cout<<*x<<" ";
//				
			}
			else cout<<"_"<<" ";
		}
		cout<<endl;
	}
}

