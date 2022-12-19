#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,x,y,result;
		cin>>a>>x>>y;
		result=__gcd(x,y);
		for(int i=0;i<result;i++){
			cout<<a;
		}
		cout<<endl;
	}
}
