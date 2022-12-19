#include <bits/stdc++.h> 
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int n ;
	cin>>n;
	map<int,int> mp;
	 int result=-1,end;
	for(int i =0;i<n;i++){
		int a;
		cin>>a;
		mp[a]++;
		if(mp[a]>1 && result ==-1) {
			result =0;
			end=a;
		}
		
	}
		if(result == -1 ) cout<<result;
		else{
			cout<<end;
		}
		cout<<endl;
	}
	}
	
