#include <bits/stdc++.h>
using namespace std;
int snt(long long a ){
	if(a>=2)
	for(long long i=2;i<=sqrt(a);i++){
		if(a%i==0) return 0;
	}
	return 1;
}
int main(){
	int a;
	cin>>a;
	while(a--){
		long long b;
		cin>>b;
//		int check=0;
		for(long long i=2;i<b;i++){
			
		
		if(snt(i)&&snt(b-i)){
			cout<<i<<" "<<b-i<<endl;
//			check=1;
			break;
		}
		}
	}
}
