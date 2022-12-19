#include<bits/stdc++.h>
using namespace std;
long long max(string s){
	long long sum=0;
	for(auto x : s){
		if(x=='5') x='6';
		int a = x -'0';
		sum=sum*10+a;
	}
	return sum;
	
}
long long min(string s){
	long long sum=0;
	for(auto x : s){
		if(x=='6') x='5';
		int a = x -'0';
		sum=sum*10+a;
	}
	return sum;
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		
		cout<<min(s1) + min(s2)<<" ";
		cout<<max(s1)+max(s2)<<endl;
	}
	
	
}
