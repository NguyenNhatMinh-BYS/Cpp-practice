#include <bits/stdc++.h> 
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int n,m;
	cin>>n>>m;
	map<int,int> mp;
	 int result=-1;
	for(int i =0;i<n;i++){
		int a;
		cin>>a;
		if(a==m) result =0;
		mp[a]++;
	}
		if(result == -1 ) cout<<result;
		else{
			cout<<mp[m];
		}
		cout<<endl;
	}
	}
	
