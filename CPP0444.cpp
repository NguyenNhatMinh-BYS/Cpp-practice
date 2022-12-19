#include <bits/stdc++.h> 
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,m,result=0;
		cin>>n>>m;
		for(int i = 0 ;i<n;i++){
			long long a;
			cin>>a;
			if(a==m){
				result=i+1;
			}
		}
		cout<<result<<endl;
	}
}
