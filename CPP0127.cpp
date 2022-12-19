#include<bits/stdc++.h>
using namespace std;
long long snt(long long a){
	if(a<2) return 0;
	for(int i =2 ;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
		
	}
	return 1;
}
int main(){
	long long a,b,t;
	cin>>t;
	while(t--){
		cin>>a;
		int check=0;
		for(int i=2;i<=a/2;i++){
			if(snt(i)&&snt(a-i)){
				check=1;
			 cout<<i<<" "<<a-i<<endl;
			 break;}
			}
		if(check==0) cout<<"-1\n";
		}
	}

